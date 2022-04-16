#include <iostream>
using namespace std;

class dnode{
    public:
        int value;
        dnode *next;
        dnode *prev;
        dnode(){
            value = 0;
            next=prev=NULL;
        }
        dnode(int v){
            value = v;
            next = prev = NULL;

        }

};

class doublylinkedlist{
    private:
    dnode *head;
    public:
    doublylinkedlist(){
        head = NULL;
    }
    void insert(int v){
        dnode *n = new dnode(v);
        if (head == NULL){
            head = n;
        }
        else{
            dnode *c = head;
            while (c->next != NULL){
                c = c->next;
                }
                c->next = n;
                n->prev = c;
            }
     }
     void display(){
         
         dnode *c = head;
         cout<<"!!!!!"<<endl;
         while (c!= NULL){
             cout<<c->value<<","<<endl;
             c = c->next;
         }
    }

    void displayreverse(){
        dnode *p = head;
        if (p==NULL) return;
        while (p->next!=NULL){
            p = p->next;
        }
        do{
            cout<<p->value<<",";
            p = p->next;
        }
        while(p!=NULL);
    }

    void remove(int v){
        dnode *d = head;
        if(head == NULL)return;
        while(d!=NULL){
            if(d->value==v)break;
            d = d->next;
        }
        if (d==NULL)return;
        if (d==head){
            d->next->prev = NULL;
            head = d->next;
        }
        else if (d->next == NULL){
            d->prev->next = NULL;
        }
        else{
            d->next->prev = d->prev;
            d ->prev->next = d->next;

        }
    }


};
