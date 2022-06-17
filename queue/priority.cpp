

#include<iostream>
using namespace std;
class circularqueue{
    const static int N = 10;
    int A[N];
    int front;
    int rear;
    int count;
    public:
        circularqueue(){
            rear = 0;
            front = 0;
            count = 0;
        }
        bool isempty(){
            return count==0;
        }
        bool isfull(){
            return count == N-1;
        }
        void enqueue(int v){
            if (!isfull()){
                A[rear++]= v;
            }
            rear%=N;
            count++;
        }
        void dequeue(){
            if (!isempty()){
                front++;
            }
            front%=N;
            count--;
        }
        void display(){
            int j = front;
            for (int i = 0 ;i<count;i++){
                cout<<A[j]<<",";
                j++;
                j%=N;
            }
        }
         int top(){
        	return A[front];
		}
};

class priorityqueue1{
	int arr[1000];
    const static int N = 1000;
    circularqueue Q[N];
    public:	
        int count = 0;
        
		
        void selectionSort(int a[], int n) {
                int i, j, min, temp;
                for (i = 0; i < n - 1; i++) {
                    min = i;
                    for (j = i + 1; j < n; j++)
                    if (a[j] < a[min])
                    min = j;
                    temp = a[i];
                    a[i] = a[min];
                    a[min] = temp;
                }
        }
	    void enqueue(int e,int p){
            Q[p].enqueue(e);
            arr[count++]=p;
        }
        void dequeue(){
            if (count == 0){cout<<"queue is underflow \n";}
        	selectionSort(arr,count);
        	if (!Q[arr[0]].isempty()){
                    Q[arr[0]].dequeue();
                
                }
            
			for (int i = 0;i<count-1;i++){
            	arr[i]=arr[i+1];
                }
                count--;
	
            }
            
        int topelement(){
           if (count==0){
               return -1;
           } 
           selectionSort(arr,count);
           return Q[arr[0]].top();
        }   
            

};
int main (){
    priorityqueue1 q;
    q.enqueue(12,1);
    q.enqueue(13,0);
    q.enqueue(11,1);
    q.enqueue(18,2); 
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    return 0;
}
