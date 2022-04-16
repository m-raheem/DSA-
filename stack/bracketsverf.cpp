#include <iostream>
#include "stackC.h"
using namespace std;


void notation(char s[]){
    StackC ch;
    char c;
    for (int i = 0;i<6;i++){
        if ((s[i]=='{')||(s[i]=='[')||(s[i]=='(')){
            ch.push(s[i]);
        }
        if (ch.isEmpty()){
             cout<<"ERROR OCCURED "<<endl;
                break;

        }
        if ((s[i]=='}')||(s[i]==']')||(s[i]==')')){
            c = ch.pop();

            if (s[i]=='}'&&c=='{'||s[i]==']'&&c=='['||s[i]==')'&&c=='('){
                //cout<<s[i]<<" and "<<c<<" on place "<<endl;
                
            }
            else{
                cout<<"ERROR OCCURED "<<endl;
                break;
            }

        }
        else{

        }
        
            }
        cout<<ch.isEmpty()<<endl;    
}

int main(){
    char s[] = {'3','2','1',')',']','}','\n'};
    notation(s);
    //cout<<n<<endl;
    
    
}

