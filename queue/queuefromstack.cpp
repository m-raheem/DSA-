#include <iostream>
#include "stack.h"
using namespace std;

class queue1{
    public:
        Stack s1,s2;
        int topval = -1;

        void enqueue(int v){
            s1.push(v);
        }
        int dequeue(){
            if (s1.isEmpty() && s2.isEmpty()){
                cout<<"queue is empty "<<endl;
                return -1;
            }
            if (s2.isEmpty()){
                while(!s1.isEmpty()){
                 s2.push(s1.getTop());
                 s1.pop();
                 }
                
            }
            topval = s2.getTop();
            s2.pop();
            return topval;
        }
        bool isempty(){
            if (s1.isEmpty()&&s2.isEmpty()){
                return true;
            }
            else{
                return false;
            }
        }
};


int main(){
    queue1 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    
}

