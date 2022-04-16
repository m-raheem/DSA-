#include <iostream>
using namespace std;

class node{
    public:
        int value;
        node*next;
};

class linkedlist{
    private:
        node*head;
        void displayr(node*s){
            if (s==NULL){
                return;
            }
            else {
                cout<<s->value;
                displayr(s->next);
            }
            
            
        }
    public:
        linkedlist(){
            head=NULL;
        } 
        void insert(int v){
            node*c;
            node*p= new node();
            p->value=v;
            p->next=NULL;
            if(head==NULL){
                head = p;
            }
            else{
                c = head;
            
            while(c->next){
                c = c-> next;
            }
            c->next = p;
        }
        }

        void display(){
            node*c = head;
            while(c!=NULL){
                cout<<c->value<<",";
                c = c->next;
            }
        }
        void insert_at_start(int v){
            node*p = new node();
            p->value = v;
            p->next = head;
            head = p;
        }
        void remove(int v){
            node *c,*p;
            c=p=head;
            while(c!=NULL){
                if (c->value == v)
                    break;
                p=c;
                c=c->next;
                }
                if (c!=NULL){
                    p->next = c->next;
                    delete c;
                }
            }
        
        void displayr(){
            displayr(head);
        }
        

        
};