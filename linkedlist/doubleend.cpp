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
        node*tail;
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
            head=tail=NULL;
        } 
        void insert(int v){
            node *n = new node();
            n->value = v;
            n->next = NULL;
            if (head==NULL){
                head = tail = n;
            }
            else if (head == tail){
                head ->next = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail = n;

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

int main(){
    linkedlist obj;
    obj.insert(12);
    obj.display();
}