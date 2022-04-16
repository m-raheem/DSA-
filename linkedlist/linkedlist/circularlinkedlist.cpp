#include <iostream>
using namespace std;
//LINKEDLIST SINGLY CIRCULAR GROUNDED

class node{
    public:
        int data;
        node* next;
        node(int v){
            data =v;
            next = NULL;
        }


};
class circlinkedlist{
        node*head;
    public:    
    circlinkedlist(){
        head = NULL;
    }
    void insert_at_head(int v){
        node*n = new node(v);
        node*temp =head;
        if (head==NULL){
            n->next=n;
            head=n;
            return;
        }
        while (temp->next!=head){
            temp =temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
    }
    void insert(int v){
        if (head==NULL){
            insert_at_head(v);
            return;
        }
        node*n = new node(v);
        node*temp = head;
        while (temp->next!=head){
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
    void remove_head(){
        node*temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        node*todelete = head;
        temp->next = head->next;
        head = head->next;
        delete todelete;
    }

    void remove(int v){
        node*temp =head;
        if (head==NULL){
            return;
        }
        if(head->data == v){
            remove_head();
            return;
        }
        while(temp->next->data!=v){
            temp = temp->next;
        }
        node*todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;


    }

    void display(){
        node* temp = head;
        do{
            cout<<temp->data<<",";
            temp=temp->next;
        }while(temp!=head);
        
    }
};

int main(){
    circlinkedlist c;
    c.insert(12);
    c.insert(13);
    c.insert_at_head(11);
    c.remove(11);
    c.display();
}

