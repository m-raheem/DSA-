#include <iostream>
using namespace std;

class list{
    

    public:
    int c;
    int size = 10;
    int A[10];
    list(){
        c = 0;
    }

    void insert_new(int e ){
        if (c<size){
            A[c] = e ;
            c++;
        }
    }

    void remove_first(){
        if (c!=0){
            for (int i = 1;i<c;i++){
                A[i-1] = A[i];
                c--;
            }
        }
    }

    void removelast(){
        if (c!=0){
            c--;
        }
    }

     void remove(int e ){
        int i ;
        if (c==0) {
            return ;
        }
        for (int i = 0 ;i<c;i++){
            if (A[i]==e){
                break;
            }
        }
        for (int j = i ; j<c-1 ; j++){
            A[j] = A[j+1];
            
        }
        c--;
    }

    void display(){
        for (int i = 0 ; i<c ;i++){
            cout<<A[i]<<","<<endl;
        }

    }

   


};

int main(){
    list y ;
    y.insert_new(10);
    y.insert_new(20);
    y.insert_new(30);
    y.insert_new(40);
    //y.display();
    y.remove(10);
    y.display();
}