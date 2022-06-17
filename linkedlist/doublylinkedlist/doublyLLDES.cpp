#include <iostream>
using namespace std;

//DOUBLY LINKED LIST CIRCULAR DOUBLE ENDED

class node{
    public:
        int data;
        node* next;
        node* prev;
    
        node(int v){
            data  = v;
            next = NULL;
            prev = NULL;

        }
};

class doubly{
    node*head;
    node*tail;
    public:
        doubly(){
            head = NULL;
            tail = NULL;
        }
        void insert_at_head(int v){
            node* n = new node(v);
            if (head==NULL){
                head = n;
                tail = n;
                // head->next = tail;
                // head->prev = tail;
                // tail->next = head;
                // tail->next = head;
                return; 
            }
            if (head==tail){
                
                n->next = head;
                n->prev = NULL;
                head = n;
                tail = head->next;
                tail->prev = n;
                tail->next = NULL;
                //cout<<"hi"<<endl;
                return;
            }
            else{
            n->next = head;
            head = n;
            head ->prev = NULL;
            //cout<<"hi"<<endl;  
            tail->next =NULL;
            }
        }

        void insert(int v){
            node* n = new node(v);
            if (head==NULL){
                //cout<<"hi1"<<endl;
                insert_at_head(v);
                return;
            }
            tail->next = n;
            n->prev = tail;
            n->next = NULL;
            tail = n;
        }
        void display(){
            node*temp = head;
            do{
                cout<<temp->data<<",";
                temp=temp->next;
            }while(temp!=NULL);
            cout<<endl;
        }
        void removehead(){
            node*todelete = head;
            head = head->next;
            head->prev = NULL;
            delete todelete;

        }
        void remove(int v){
            node*temp = head;
            if (head==NULL){
                return;
            }
            if (head->data == v){
                removehead();
                return;
            }

            while(temp->next->data!=v||temp!=NULL){
                temp = temp->next;
            }
            if (temp->next==NULL){
                cout<<" not found ! "<<endl;
                return;
            }
            
            node*todelete = temp->next;
            if (todelete==tail){
                tail=temp;
                tail->next = NULL;
                delete todelete;
                return;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            // if(temp->next==tail){
            // temp->next->prev = temp;
            // temp->next->next = head;} 
            // todelete->prev->next=todelete->next;
            // if (todelete->next!=NULL){
            // todelete->next->prev = todelete->prev;}
            // delete todelete;
            delete todelete;
        }
        void alternate(){
            node*temp = head;
            while(temp!=NULL){
                
                cout<<temp->data<<",";
                temp = temp->next->next;
            }
            temp = head;
            while(temp!=tail){
            temp = temp->next;}
            while(temp!=NULL){
                cout<<temp->data<<",";
                temp = temp->prev->prev;

            }

        }

};

int main(){
    doubly d;
    
    d.insert(1);d.insert(2);d.insert(3);
    d.insert(4);d.insert(5);d.insert(6);
    d.insert_at_head(11);
    d.insert(12);
    d.display();
    d.alternate();

}