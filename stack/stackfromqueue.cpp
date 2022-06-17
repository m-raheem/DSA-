#include <bits/stdc++.h>
using namespace std;

class stackca{
    queue<int >q1,q2,q;
    public:

        void push(int v){
            q2.push(v);

            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q = q1;
            q1 = q2;
            q2 = q;
        }

        void pop(){
            if (q1.empty()){
                return;
               
            }
             q1.pop();
        }
        int top()
        {
            if (q1.empty())
                return -1;
            return q1.front();
        }
        void display(){
            while(!q1.empty()){
                cout<<q1.front()<<",";
                q1.pop();
            }
            cout<<endl;
        }
};

int main(){
    stackca s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);


    cout<<s1.top()<<endl;
    s1.pop();
     cout<<s1.top()<<endl;
    s1.pop();
     cout<<s1.top()<<endl;
    s1.pop();   
     cout<<s1.top()<<endl;
    s1.pop();
     cout<<s1.top()<<endl;
    s1.pop();
     cout<<s1.top()<<endl;
    s1.pop();
    

}
