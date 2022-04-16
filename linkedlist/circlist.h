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
                c = c->next;
                cout<<"this"<<endl;      
            while(c->next!=head){
                c = c-> next;
            }
            c->next = p;
        }
        }

        void display()
		{
			node *ptr=head;
		do{
        printf("Element is %d\n", ptr->value);
        ptr = ptr->next;
        }while(ptr!=head);
        }

        void insertAtStart(int v)
		{
			node *n = new node();
			n->value = v;
			node *p = head ->next;
			while(p->next != head){
				p = p->next;
			}
			p->next = n;
			n->next = head;
			head = n;
		}
        void remove(int v){
            node *c,*p;
            c=p=head;
            c = c->next;
            while(c!=head){
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