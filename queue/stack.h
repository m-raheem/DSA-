#include <iostream>
using namespace std;

class Stack
{
	private:
		int A[10];
		int top;
	public:
		Stack()
		{
			top =0;
		}
	void push(int x)
	{
		if (!isFull())
			A[top++]=x;
	}
	
	int pop()
	{
		if (!isEmpty())
				return A[--top];
		else
				return -1;
	}
	
	int getTop()
	{
		return (A[top-1]);
	}
	bool isEmpty()
	{
		return (top==0);
	}
	
	bool isFull()
	{
		return (top==10);
	}
};
