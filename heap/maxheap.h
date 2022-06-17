#include <iostream>
using namespace std;

class Maxheap{
    int n;
    static const int size = 20;
    int H[size];
    public:
        Maxheap(){
            n=0;
        }

        void insert(int v){
            if (n==size)return;
            H[n++] = v;
            heapup(n-1);        
        }
        void heapup(int c){
            int p,t;
            if (c==0){return;}
            if(c%2==1){
                p = (c-1)/2;
            }
            else{
                p = (c-2)/2;
            }
            if(H[c]>H[p]){
                t=H[c];
                H[c] = H[p];
                H[p] = t;
                heapup(p);
            }

        }

        void remove(){
            if(n==0)return;
            H[0]=H[n-1];
            n--;
            heapdown(0);
        }
        void heapdown(int p){
            int l,r,t,c;// left,right,swap variable
            if(p>=n)return;
            l = 2*p +1;
            r = l+1;
            if (l>n || r>n){return;}
            if(H[l]>H[r]) c=l;
            else{c=r;}
            if(H[c]>H[p]){
                t = H[c];
                H[c] = H[p];
                H[p] = t;
                heapdown(c);
            }
        }

        void display(int p){
            for (int i=0;i<n;i++){
                cout<<H[i]<<",";
            }
            cout<<endl;
        }
        int getlen{
            return n;
        }
            // if (p<n){
            //     cout<<H[p]<<",";
            //     display(2*p+1);
            //     display(2*p+2);
            // }
        

};