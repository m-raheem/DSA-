#include <iostream>
using namespace std;

class frontqueue{
    private:
        static const int N = 5;
        int A[N];
        int rear;
    public:
        frontqueue(){
            rear=0;
        }
        void enqueue(int e){
            if(rear<N) A[rear++] = e;
        }
        void dequeue(){
            int i;
            for(i = 0;i<rear-1;i++){
                A[i] = A[i+1];
            }
            rear--;    
        }
        int getfirst(){
            if (rear>0) return A[0];
            return -1;
        }
        void display(){
            for (int i = 0;i<rear;i++){
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


