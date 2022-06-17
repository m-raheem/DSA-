#include <iostream>
#include <cstring>
#include<math.h>
using namespace std;

class hashing{
    static const  int size = 100;
    string arr[size];
    
    public:
        hashing(){
    }

        int h(int n,int s){
            return n%s;
        }


        int charInt(string Input){
            int s = 0;
            int n = Input.length();
            for (int i = 0 ; i<n;i++){
                s+=pow(26,i)*int(Input[i]);
            }
            return s;
        }
        void array_in(string a){ 
            int index = h(charInt(a),size);
            arr[index] = a;
        
        }
        string array(int i){
            return arr[i];
        }

};

int main(){
    hashing hash;
    string s = {"abc"};
    hash.array_in(s);

    cout<<hash.charInt(s)<<endl;
    cout<<hash.array(hash.h(hash.charInt(s),100))<<endl;
}