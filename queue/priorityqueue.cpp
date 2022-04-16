#include <iostream>
#include "frontqueue.h"

class priorityqueue{
    const static int N = 3;
    frontqueue Q[N];
    public:
        void enqueue(int e,int p){
            char c;
            int count = 0;
            Q[p].enqueue(e);
            
        }
        void dequeue(){
            for (int i = 0;i<N;i++){
                if (!Q[i].isempty()){
                    Q[i].dequeue();
                    break;
                }
            }
        }

};
int main (){
    priorityqueue q;
    q.enqueue(12,1);
    q.enqueue(13,0);
    q.enqueue(11,1);
    q.enqueue(18,2);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
}