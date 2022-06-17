#include <iostream>
#include <cstring>
using namespace std;

void cipher_bruteforce(string s){
    char ch;
    for(int j = 0;j<26;j++){
    for (int i = 0;i<s.length();i++){
        if (s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
            cout<<s[i];
            continue;
        }
        if(s[i]==' '){
            cout<<s[i];
            continue;
        }
        
        s[i]+=1;
        if(s[i]=='['){
            s[i]='A';
        }
        cout<<s[i];
    }
    cout<<" "<<j<<endl;
    

    }
}
int main(){
    cipher_bruteforce("TRVJRI TZGYVIJ RIV HLZKV VRJP KF TIRTB 1234");
   
}
