#include <iostream>

using namespace std;

class Node
 {
 	public:
 		int value;
 		Node *next;
 };
 
 class LinkedList
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
 		LinkedList()
 		{
 			head=NULL;
		}
	
		void insertAtStart(int v)
		{
			Node *n = new Node();
			n->value = v;
			Node *p = head ->next;
			while(p->next != head){
				p = p->next;
			}
			p->next = n;
			n->next = head;
			head = n;
		}
		
		void insert(int v)
		{
			Node *n = new Node();
			n->value = v;
			n->next = head;
			if (head==NULL)
				head = n;
			else
				{
				Node *p=head;
                p = p->next;
				while (p->next!=head)
					p = p->next;
				p->next = n;					
				}
		}
		
		void display()
		{
			Node *ptr=head;
		do{
        printf("Element is %d\n", ptr->value);
        ptr = ptr->next;
        }while(ptr!=head);
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
			d = d->next;
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