#include <iostream>
using namespace std;

class circularlist
{
	private:
		static const int size = 10;
		int A[size];
		int no_of_elements;
		int first_element;
		int last_element;
	
	public:
		circularlist(){
			no_of_elements=0;
			first_element=-1;
			last_element=-1;
			
		}
		//adding last element in a circular list:
		void addlast(int e){
			if (no_of_elements==0){
				last_element++;
				first_element=0;
				A[last_element]=e;
				no_of_elements++;
			}
			else
			{
				last_element++;
				A[last_element]=e;
				no_of_elements++;
			}
		}
		//------------------------------------------------------------------------------------
		//adding last element can also be done using:
		//void addlast(int e){
		//if (no_of_elements==0) first_element=0;
		//     last_element++;
		//    A[last_element]=e;
		//     no_of_elements++;
		// }
		//------------------------------------------------------------------------------------
		
		//TO REMOVE LAST ELEMENT OF A CIRCULAR LIST:
		void removelast(){
			if (first_element==size){
				first_element=0;
				last_element--;
				no_of_elements--;
	    	}
			
		}
		//to remove first element of a circular list:
		void removefirst(){
			if (first_element==size){
				first_element=0;
				first_element++;
			    no_of_elements--;
			}
	}
		//to check if the circular list is empty:
		int isEmpty(){
			return(no_of_elements==0);
		}
		//to check if the circular list is full:
		int isFull(){
			return(no_of_elements==size);
		}
		
		//displaying elements of a circular list:
		void display(){
			int i=first_element;
			for (int j=0;j<no_of_elements;j++){
				cout<<A[i];
				i++;
				i%=size;
			}
		}		
		//adding at strat/first of a circular list:
		void addfirst(int e){
			if(no_of_elements==0){
				first_element=0;
				last_element++;
				no_of_elements++;
				A[last_element]=e;
			}
		}
		//inserting element in a circular list:
		// first_element--;
		// if(first_element<0){
		// 	f=0;
	 	// 	A[first_element]==e;
		// 	no_of_elements++;
		// } 
		
		
		
		
};
int main(){
	circularlist l;
	l.addfirst(23);
	l.display();
	
}
