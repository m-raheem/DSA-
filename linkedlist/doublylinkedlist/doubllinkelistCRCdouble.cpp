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
            cout<<1<<endl;
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
                n->prev = tail;
                head = n;
                tail = n->next;
                tail->next = n;
                tail->prev = n;
                //cout<<"hi"<<endl;
                return;
            }
            else{
            n->next = head;
            head = n;
            head ->prev = tail;
            //cout<<"hi"<<endl;  
            tail->next =head;
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
            n->next = head;
            tail = n;
        }
        void display(){
            node*temp = head;
            do{
                cout<<temp->data<<",";
                temp=temp->next;
            }while(temp!=head);
        }
        void removehead(){
            node*todelete = head;
            head = head->next;
            head->prev = tail;
            tail->next = head;
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

            while(temp->next->data!=v){
                temp = temp->next;
            }
            
            node*todelete = temp->next;
            if (todelete==tail){
                tail=temp;
                tail->next=head;
                tail->prev= temp->prev;
                return;
            }
            temp->next = temp->next->next;
            if(temp->next==tail){
            temp->next->prev = temp;
            temp->next->next = head;} 
            // todelete->prev->next=todelete->next;
            // if (todelete->next!=NULL){
            // todelete->next->prev = todelete->prev;}
            // delete todelete;
            delete todelete;
        }

};

int main(){
    doubly d;
    d.insert(12);
    d.insert(16);
    d.insert_at_head(11);
    d.remove(12);
    d.display();

}