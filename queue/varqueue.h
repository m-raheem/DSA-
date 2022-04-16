#include <iostream>
using namespace std;

class varqueue{
    private:
        static const int N = 10;
        int A[N];
        int rear;
        int front;
    public:
        varqueue(){
            rear=0;
            front=0;
        }
        void enqueue(int e){
            if(rear<N) A[rear++] = e;
        }
        void dequeue(){
            front++;   
        }
        int getfirst(){
            if (rear>0) return A[front];
        }
        void display(){
            for (int i = front;i<rear;i++){
                cout<<A[i]<<",";
            }
        }
        bool isfull(){
            return N-1==rear;
        }
        bool isempty(){
            return rear==0;
        }      
};


