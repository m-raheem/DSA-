#include <iostream>
#include "stackc.h"
/*
               STK = [[
				CH  =
     string expr1 = "[{a-4(2+b)}-x]";
     string expr2 = "[{a-4(2+b)}-x["
     [{a-4*((2+b)}-x]
     [{a-4*(2+b})-x]
     Stack stk;
	for i=0 to length of expression
	     ch = expr[i];
	     
		if ch == '[' || '{' || '('
			stk.push(ch)
		else
		    if ch==']'
		    	if (stk.pop()!='[')
		    		//error
		    if ch==')'
		    	if (stk.pop()!='(')
		    	   //error
		    		

*/


int main() {
	StackC input;
	char a[8]={'C','O','M','S','A','T','S','\0'};
	char b[8];
	
	for (int i=0;i<7;i++)
		input.push(a[i]);
		
	for (int i=0;i<7;i++)
		{
		b[i]=input.pop();
		cout << b[i] << endl;
		}
		b[7]=NULL;
		
	cout << a << endl;
	cout << b << endl;
	return 0;
}
