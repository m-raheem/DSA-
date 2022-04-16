#include <iostream>
using namespace std;

class circularlist{
    public:
    int f;
    int c ;
    int l;
    int size = 10;
    int A[10];
    

    circularlist(){
        c = 0;
        f = -1;
        l = -1 ;

    }

    void removelast(){
        if (c!=0){
            l--;
            c--;
        }
    }

    void removefirst(){
        if (c!=0){
            f++;
            f%=size;
            c--;

        }
    }

    void addfirst(int e ){
        if (c==0){
            f = 0;
            l++;
            c++;
            A[l]= e;
        }
        else {
            f--;
        }
        if (f<0){
            f = size-1;
        
            A[f] = e;
            c++;
        }
    }

    void addlast(int e ){
        if (isfull()){
            return;
        }
        if (c==0){
            f= 0;
        }
        l++;
        A[l] = e;
        c++;

    }

    int isfull(){
        return c==size;
    }
    int isempty(){
        return c==0;
    }

    void display(){
        int i = f;
        for (int j = 0 ; j<c;j++){
            cout<<A[j]<<","<<endl;
            i++;
            i%=size;
        }
    }
};


int main(){
    circularlist y;
    y.addfirst(210);
    y.addlast(30);
    y.addlast(29);
    y.addfirst(20);
    y.addfirst(230);
    y.display();
}