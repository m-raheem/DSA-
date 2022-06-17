#include <iostream>
#include "circularqueue.h"


class priorityqueue{
    const static int N = 1000;
    circularqueue Q[N];
    int high = -1;
    int low = -1;
    int count = 0;

    public:
        int arr[1000];
        int a = 0;
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
            arr[count] = p;  
            Q[p].enqueue(e);
            count++;
            
        }
        void dequeue(){
            if (count==0){
                cout<<"priority queue is underflow "<<endl;
                return;
            }
            selectionSort(arr,count);
            a = arr[0];    
            Q[a].dequeue();
            for(int i = 0 ;i<count-1;i++){
                arr[i] = arr[i+1];
            }
            count--;
        }
        int topelement(){
           if (count==0){
               return -1;
           } 
           selectionSort(arr,count);
           return Q[arr[0]].topelement();
        }

};
int main (){
    priorityqueue q;
    q.enqueue(12,1);
    q.enqueue(14,5);
    q.enqueue(13,0);
    q.enqueue(11,1);
    q.enqueue(16,1);
    q.enqueue(14,5);
    q.enqueue(23,0);
    q.enqueue(15,1);
    
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
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();
    cout<<q.topelement()<<endl;
    q.dequeue();


}