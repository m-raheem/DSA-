#include <iostream>
#include <bits/stdc++.h>
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
         stack<int>s;
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
            //s.push(temp->data);
            cout<<temp->data<<",";
            temp=temp->next;
        }while(temp!=head);
        
    }
    void reverse(){
        node* temp = head;
        do{
            s.push(temp->data);
            remove(temp->data);
            temp=temp->next;
        }while(temp!=head);
        do{
            insert(s.top());
            s.pop();
        }while(!s.empty());


        
        
    }
};

int main(){
    circlinkedlist c;
    stack<int>s;
    c.insert(9);
    c.insert(7);
    // c.insert_at_head(11);
    // c.remove(11);
    c.insert(4);
    c.insert(2);
    c.reverse();
    c.display();


}

