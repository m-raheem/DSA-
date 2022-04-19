#include <iostream>
using namespace std;

class treenode{
    public:
        int value;
        treenode *lc;
        treenode *rc;
        treenode(int v){
            value = v;
            lc = rc = NULL;
        }

};

class bst{
    private:
        treenode* root;
        void displaypreorder(treenode* r){
            if (r==NULL)return;
            cout<<r->value<<",";
            displaypreorder(r->lc);
            displaypreorder(r->rc);
        }
        void displayinorder(treenode* r){
            if (r==NULL)return;
            displayinorder(r->lc);
            cout<<r->value<<",";
            displayinorder(r->rc);
        }
        void displaypostorder(treenode* r){
            if (r==NULL)return;
            displaypostorder(r->lc);
            displaypostorder(r->rc);
            cout<<r->value<<",";
        }
    public:
        bst(){
            root = NULL;
        }
        void insert(int v){
            treenode*storage = root,*trav = root ;
            treenode*n = new treenode(v);
            if(root==NULL){
                root=n;
                return;
            }
            while(trav!=NULL){
                storage = trav;
                if (v<trav->value){
                    trav=trav->lc;
                    }
                else {
                    trav=trav->rc;
                    }
                }
                if (v<storage->value){
                    storage->lc = n;
                }
                else{
                    storage->rc = n;
                }
            }
        
        void displaypreorder(){
            displaypreorder(root);
        }
         void displayinorder(){
            displayinorder(root);
        }
         void displaypostorder(){
            displaypostorder(root);
        }
        

};

int main(){
    bst b;
    b.insert(10);
    b.insert(20);
    b.insert(30);
    b.insert(40);
    b.insert(50);
    b.insert(60);
    b.insert(70);
    b.insert(80);
    b.insert(90);
    b.insert(100);
    cout<<"\nDisplaying preorder traversal "<<endl;
    b.displaypreorder();
    cout<<"\nDisplaying postorder traversal "<<endl;
    b.displaypostorder();
    cout<<"\nDisplaying inorder traversal "<<endl;
    b.displayinorder();
}