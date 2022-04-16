#include <iostream>
using namespace std;

class List{
	private:
		static const int size=10;
		int A[size];
		int no_of_elements=0;
	
	public:
		List(){
			no_of_elements=0;
		}
	
	//to insert element in the list:
	void insert(int e){
		if (no_of_elements<size){
			A[no_of_elements]=e;
			no_of_elements++;
		}
	}
	//to remove element from the list:
	// A.remove(40);
	
	//to remove last element from the list:
	void removeLast(){
		if (no_of_elements!=0)
		no_of_elements--;
	}
	
	//to remove first element from the list:
	void removeFirst(){
		if (no_of_elements!=0){
			for (int i=1;i<no_of_elements;i++){
				A[i-1]=A[i];
				no_of_elements--;
			}
			
		}
	}
	//to search and remove from the list:
	void remove(int e){
		if(no_of_elements==0) return;
		int i=0;
		for(i;i<no_of_elements;i++){
			if (A[i]==e){
				break;
			}
		}
		for(int j=i;j<no_of_elements;j++){
			A[j]=A[j+1];
			}
			no_of_elements--;
		}
		
	
	
	//to display the content of the list:
	void display(){
		for (int i=0;i<no_of_elements;i++)
		cout<<A[i]<<";";
	}
};
int main(){
	List y;
	y.insert(40);
	y.insert(20);
	y.remove(20);
	y.display();
}
