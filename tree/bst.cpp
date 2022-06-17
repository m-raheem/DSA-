#include <iostream>
#include <queue>
#include <stack>
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
            if (r->lc==NULL && r->rc==NULL){
                counter++;
                return;
            }
            displaypostorder(r->lc);
            displaypostorder(r->rc);
            cout<<r->value<<",";
        }
    public:
        int sum = 0;
        int count = 0;
        int Height = 0;
        int counter = 0;
        queue<treenode*>q;
        stack<treenode*>s;
        
        bst(){
            root = NULL;
        }
        void remove(int v){
            root = deletenode(root,v);
        }
        int minvalue(treenode*p){
            while(p->lc!=NULL){
                p = p->lc;
            }
            return p->value;

        }
        treenode* deletenode(treenode*p,int v){
            if (p==NULL){return p;}
            if (v<p->value){
                p->lc = deletenode(p->lc,v);
            }
            else if (v>p->value){
                p->rc = deletenode(p->rc,v);
            }
            else{
                 if (p->lc == NULL){
                return p->rc;
            }
                else if (p->rc == NULL){
                return p->lc;
            }
                p->value = minvalue(p->rc);
                p->rc = deletenode(p->rc,p->value);
                
                }
            return p;
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
        void sumfunc(treenode* r){
            if (r==NULL){
                //count++;
                return;}
            
            count++;
            sum+=r->value;
            sumfunc(r->lc);
            sumfunc(r->rc);
        }
        void sumfunc(){
            sumfunc(root);
        }
        void height(){
            int j =1;
            if (count%2==0){
                while(j<=count){
                    j*=2;
                    Height++;
                }
            }
            else{
                count++;
                while(j<=count){
                    j*=2;
                    Height++;
                }

            }
        }


        

        void levelwiseorder(){
            treenode*p = root;
            q.push(p);
            while (!q.empty()){
                p=q.front();
                q.pop();
                cout<<p->value<<",";
                if (p->lc!=NULL){
                    q.push(p->lc);
                }
                if(p->rc!=NULL){
                    q.push(p->rc);
                }
            }
        }
        void inorder(){
            treenode*p= root;
            while(!s.empty()||p!=NULL){
                if(p!=NULL){
                    s.push(p);
                    p =p->lc;
                }
                else{
                    p = s.top();
                    s.pop();
                    cout<<p->value<<",";
                    p = p->rc;}
                }
            }

        

        

};

int main(){
    bst b;
    b.insert(1);
    b.insert(2);
    b.insert(3);
    //b.insert(110);
    b.insert(4);
    b.insert(5);
    // b.remove(6);
    // b.remove(1);
    // b.remove(2);
    //b.insert(70);
    //b.insert(80);
    //b.insert(90);
    //b.insert(100);
    //b.remove(60);
    cout<<"\nDisplaying preorder traversal "<<endl;
    b.displaypreorder();
    cout<<"\nDisplaying postorder traversal "<<endl;
    b.displaypostorder();
    cout<<"\nDisplaying inorder traversal "<<endl;
    b.displayinorder();
    cout<<"\n level wise display "<<endl;
    b.levelwiseorder();
    cout<<"\nDisplaying inorder traversal "<<endl;
    b.inorder();
    b.sumfunc();
    b.height();
    cout<<"\nthe sum is "<<b.sum<<" of "<<b.count<<" nodes "<<b.Height<<" height "<<endl;
    cout<<b.counter<<endl;

}


// void remove(){
//             int min = s4.gettop();
//             while(!s4.isempty()){
//                 if ( s4.gettop()<min){
//                     min = s4.gettop();
//                 }
//                 s1.push(s4.pop());
//             }
//             while(!s1.isempty()){
//                 if (min!=s1.gettop()){
//                     s4.push(s1.pop());
//                 }
//             }
//             s4.push(min);
//             s4.pop();
            
            
//         }