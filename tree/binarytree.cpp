#include <iostream>
using namespace std;

class binarytree{
    private:
        static const int s = 10;
        int arr[s];
        int n;
    public:
        binarytree(){n = 0;}
        //int root = arr[0];
        void insert(int v){
            arr[n++] = v;
        }
        void displaypreo(int x){
            if (x>=n) return;
            cout<<arr[x]<<",";
            displaypreo(2*x+1);
            displaypreo(2*x+2);
        }

        void displayposto(int x){
            if (x>=n) return;
            displayposto(2*x+1);
            displayposto(2*x+2);
            cout<<arr[x]<<",";
        }

        void displayino(int x){
            if (x>=n) return;
            displayino(2*x+1);
            cout<<arr[x]<<",";
            displayino(2*x+2);
            
        }

        void levelwise(){
            for (int i=0;i<n;i++){
                cout<<arr[i]<<",";
            }
        }
};

int main(){
    binarytree tr;
    tr.insert(10);
    tr.insert(20);
    tr.insert(30);
    tr.insert(40);
    tr.insert(50);
    tr.insert(60);
    tr.insert(70);
    tr.insert(80);
    tr.insert(90);
    cout<<"Displaying inorder traversal "<<endl;
    tr.displayino(0);
    cout<<"\nDisplaying preorder traversal "<<endl;
    tr.displaypreo(0);
    cout<<"\nDisplaying postorder traversal "<<endl;
    tr.displayposto(0);
    cout<<"\nDisplaying levelwise traversal "<<endl;
    tr.levelwise();



}