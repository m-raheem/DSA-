#include "maxheap.h"
#include "minheap.h"

int main(){
    //Maxheap h;
    int arr[20];
    Minheap h;
    
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(110);
    h.insert(100);
    h.insert(45);
    h.insert(54);
    h.display(0);
    h.remove();
    h.display(0);
    void heapsort(){
        for (int i = getlen()-1;i<=0;i++)
        {
            arr[i] = h.remove();
        }
        
    }


}