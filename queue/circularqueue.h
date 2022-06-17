#include <iostream>
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
        int topelement(){
            return A[front];

        }
};