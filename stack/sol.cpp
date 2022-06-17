#include<iostream>
using namespace std;

class stk{
    const static int N =10;
    int arr[N];
    int top = 0 ;
    public:
        bool isempty(){
            if (top == 0 ){
                return true;
            }
            return false;
        }
        bool isfull(){
            if (top == N){
                return true;
            }
            return false;
        }
        void push(int v){
            if (!isfull()){
            arr[top++] = v;}
        }

        int pop(){
            if (isempty()){
                return -1;
            }
            else{
                return arr[--top];
            }
        }
        
        void display(){
            for (int i = 0;i<top;i++){
                cout<<arr[i]<<",";
            }
        }
        int gettop(){
            return arr[top];
        }

};

class sol{
    stk s1,s2,s3,s4;
    const static int N = 10;
    int arr[N] = {1,2,3,4,5,6,7,8,9,10};

    public:

        
        void insert(){
            
            for (int i =0 ;i<N;i++){
                if (i>=(N/2)){
                    s2.push(arr[i]);
                }
                else{
                    s1.push(arr[i]);
                }
            }
        }
        void insert_in_stack(){
            while(!s2.isempty()){
                s3.push(s2.pop());
            }
            while(!s1.isempty()){
                s3.push(s1.pop());
            }
            while(!s3.isempty()){
                s4.push(s3.pop());
            }
        }
        void display(){
            s4.display();
        }
        // void remove(){
        //     int min;
        //     int top;
        //     top = s4.pop();
        //     min = top;
        //     while(!s4.isempty()){
        //         if ( top<min){
        //             min = top;
        //         }
        //         //cout<<top<<endl;
        //         s1.push(top);
        //         top = s4.pop();
        //     }
        //     if (top<min){
        //         min = top;}
        //        s1.push(top);
        //     while(!s1.isempty()){
        //         top = s1.pop();
        //         if (min!=top){
        //             s4.push(top);
        //         }
        //     }
        //     s4.push(min);
        // }
        void remove(){
            cout<<endl;
            int min = s4.gettop();
            while(!s4.isempty()){
                cout<<s4.gettop()<<endl;
                s1.push(s4.pop());
                if ( s4.gettop()<min){
                    min = s4.gettop();
                }
                
                
            }
            while(!s1.isempty()){
                if (min!=s1.gettop()){
                    cout<<s1.gettop()<<endl;
                    s4.push(s1.pop());
                }

            }
            s4.push(min);
            s4.pop();
            
            
        }
};

int main(){
    sol s;
    s.insert();//array to stack 
    s.insert_in_stack();// stack to stack merge 
    s.display();
    s.remove();
    s.display();


}