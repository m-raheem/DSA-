#include <iostream>
using namespace std;

//DOUBLY LINKED LIST GROUNDED

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
    public:
        doubly(){
            head = NULL;
        }
        void insert_at_head(int v){
            node* n = new node(v);
            n->next = head;
            if (head!=NULL){
                head ->prev = n;
                }
            head = n;

        }

        void insert(int v){
            node* n = new node(v);
            if (head==NULL){
                insert_at_head(v);
                return;
            }
            node* temp = head;
            while (temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = n;
            n->prev = temp;

        }
        void display(){
            node*temp = head;
            while(temp!=NULL){
                cout<<temp->data<<",";
                temp=temp->next;
            }
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

            while(temp->next->data!=v){
                temp = temp->next;
            }
            node*todelete = temp->next;
            todelete->prev->next=todelete->next;
            if (todelete->next!=NULL){
            todelete->next->prev = todelete->prev;}
            delete todelete;
        }

};

int main(){
    doubly d;
    d.insert(12);
    d.insert(13);
    d.insert(16);
    d.insert_at_head(11);
    d.remove(13);
    d.display();

}