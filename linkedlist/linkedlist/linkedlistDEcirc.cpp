#include <iostream>
using namespace std;
//LINKEDLIST DOUBLEENDED GROUNDED

class node{
    public:
        int data;
        node* next;
        node(int v){
            data = v;
            next = NULL;
        }
};

class linkedlist{
    private:
        node* head;
        node* tail;
    public:    

    linkedlist(){
        head = NULL;
        tail = NULL;
    }
    node* head_r(){
        return head;
    }
    void insert_atfirst(int v){
        node* n = new node(v);
        if (head==NULL){
            n->next = head;
            head = n;
            tail = n;
            return;
        }
        n->next = head;
        head = n;
        tail->next = head;                
    }

    void insert(int v){
        node* n = new node(v);
        if (head ==NULL){
            insert_atfirst(v);
            return;
        }
        else if (head==tail){
            head->next = n;
            tail = n;
            tail->next = head;
        }
        else{
            tail->next=n;
            tail = n;
            tail->next = head;
        }
    }
    void remove_head(){
        node* todelete = head;
        head = head->next;
        tail->next = head;
        delete todelete;
    }

    void remove(int v){                
        if (head== NULL) return;
        if (head == tail){
            remove_head();
            return;
        }
        node* temp = head;
        if (temp->data==v){
            remove_head();
            return;
        }
        while(temp->next->data!= v){
            temp = temp->next;
        }
        node* todelete = temp->next;
        if (tail==todelete){
            tail = temp;
            tail->next = head;
        }
        else{
        temp->next = temp->next->next;}
        //temp->data = temp->next->data;
        delete todelete;

        }

    void todisplay(node* head){
        node*temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<",";
            temp = temp->next;
            }
        cout<<endl;    
            
        }

     void todisplay(){
        node*temp = head;
        do 
        {
            cout<<temp->data<<",";
            temp = temp->next;
            }while (temp!=head);
        cout<<endl;    
            
        }    
    node* reverse(){
        node*previous = NULL;
        node*current = head;
        node*nextptr ;
        while(current!=NULL){
            nextptr = current->next;
            current->next=previous;
            previous=current;
            current=nextptr;
        }
        return previous;
    } 
    node* reversek( int k,node* head){
        node*previous = NULL;
        node*current = head;
        node*nextptr ;
        int count = 0;
        while(current!=NULL&&count<k){
            nextptr = current->next;
            current->next=previous;
            previous=current;
            current=nextptr;
            count++;
        }
        if (nextptr!=NULL){
            head->next= reversek(2,nextptr);
        }
        return previous;

    }  
        
    };


int main(){
    linkedlist l;
    l.insert(9);
    l.insert(10);
    l.insert(12);
    l.insert(13);
    l.insert(18);
    l.insert(19);
    l.insert_atfirst(22);
    l.remove(9);
    l.todisplay();
    // node* nhead = l.reverse();

    // l.todisplay(nhead);
    // node* head1= l.reversek(2,nhead);
    // l.todisplay(head1);















}    
