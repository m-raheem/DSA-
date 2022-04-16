#include <iostream>
#include "frontqueue.h"
#include "varqueue.h"
#include "circularqueue.h"
using namespace std;

int main(){
    //varqueue f1;
    frontqueue f1;
    //circularqueue f1;
    f1.enqueue(10);
    f1.enqueue(20);
    f1.enqueue(30);
    f1.dequeue();
    f1.display();
    //frontqueue f[10];
    // int d;
    // int arr[10] = {1,24,329,22,27,28,657,245,553,23}; 
    // // f.enqueue(10);
    // // f.enqueue(20);
    // // f.enqueue(30);
    // // f.display();
    // for(int i = 0;i<10;i++){
    //      d = arr[i]%10;
    //     f[d].enqueue(arr[i]);
    //     }
    // for(int i = 0 ;i<10;i++){
    //     d = f[i].getfirst();
    //     int count = 0; 
    //     while(d!=-1){
    //      d = f[count++].getfirst();
    //      int l = d%10;
    //      arr[l] = d;
    //      }    
    // }
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<",";
    // }        
}

