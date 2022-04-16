#include <iostream>
using namespace std;

class StackC
{
	private:
		char A[10];
		int top;
	public:
		StackC()
		{
			top =0;
		}
	void push(char x)
	{
		if (!isFull())
			A[top++]=x;
	}
	
	char pop()
	{
		if (!isEmpty())
				return A[--top];
		else
				return NULL;
	}
	
	char getTop()
	{
		if (!isEmpty())
			return (A[top-1]);
		else
			return NULL;
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
