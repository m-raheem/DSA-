#include <iostream>
#include <cstring>
#include "Stackc.h"

int prec (char c)
{
	if (c=='*'|| c=='/')
		return 1;
	else
		return 0;
}

int main() {
	char ch;
	StackC stk;
	char  *infix = "(a+b/c)";
	char  *postfix = "";//""new string();
	int length = strlen(infix);
	//cout << "infix length is " << length << endl;
	for (int i=0;i<length;i++)
		{
			ch = infix[i];
			//cout << "Symbol " << ch <<endl;
			switch (ch)
			{
				case '(':
					stk.push(ch); 
					break;
				case ')':
					 while (stk.getTop()!='(')
					 	postfix += ch;
					 stk.pop();
					 break;
				case '+':
				case '-':
				case '/':
				case '*':
					while (!stk.isEmpty())
					{
						if (stk.getTop()=='(') break;
						if (prec(stk.getTop()) < prec(ch)) break;
						
						postfix += stk.pop();
					}
					stk.push(ch);
					break;
			 	default:
			 		postfix +=  ch;
			 		
			}
			
		}
	while (!stk.isEmpty()) 
	   postfix += stk.pop();
	   
	cout <<" Infix Expression:" << infix << endl;
	cout <<" Postfix Expression:" << postfix << endl;	
	
	return 0;
}
