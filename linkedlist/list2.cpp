#include<iostream>
using namespace std;

class Node
 {
 	public:
 		int value;
 		Node *next;
 };
 
 class CircularList
 {
 	private:
	 Node *head;
 	
 	void displayReverse(Node *x)
		{
			if (x==NULL)
				return;
			else
				{
				displayReverse(x->next);
				cout << x->value << ", ";
				}
		}
 	public:
 		CircularList()
 		{
 			head=NULL;
		}
	
		void insertatstart(int v)
		{
			Node *n = new Node();
			n->value=v;
			if(head==NULL)
			{
	        head = n;
			n->next = head; }
			else{
			 Node *c=head;
			 while(c->next!=head){
			 	c=c->next;
			 }
			 c->next=n;
			 n->next=head;
			 }
			}
		
		void insertatend(int v)
		{
			Node *n = new Node();
			n->value=v;
			if(head==NULL){
				head=n;
				n->next=head;
			}
			else
				{
				Node *p=head;
				while (p->next!=head){
					p = p->next;
				}
				p->next = n;
				n->next=head;					
				}
		}
		void display()
		{
			Node *c=head;
			cout << "{";
			if (c==NULL) return;
			do{
				
					cout << c->value << ", ";
					c=c->next;
				}while(c!=head);
			cout << "\b\b}" << endl;
	}	
		
		void displayReverse()
		{
			cout << "{";
			displayReverse(head);
			cout << "\b\b}" << endl;
		}
		
		void remove(int v)
		{
			Node *p,*d;
			p=d=head;
			if (head==NULL) return;
			d=d->next;
			while (d!=head)
			{
				if (d->value==v)
					break;
				p=d;
				d=d->next;
			}
			if (d==NULL) return;
			if (d==head)
				head = head->next;
			else
				{
					p->next = d->next;
				}
			delete d;
		}
 };
 int main(){
 	CircularList list;
 	list.insertatstart(30);
 	list.insertatstart(40);
    list.insertatend(50);
 	list.insertatend(80);
 	list.insertatend(90);
 	list.display();
 	list.remove(40);
 	list.remove(90);
 	list.display();
 	return 0;
 }