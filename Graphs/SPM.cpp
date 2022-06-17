#include <iostream>
using namespace std;

class SPM{
    int A[5][5];
    int B[5][5];

    public:
        void input_Array(){
            int input;
            for (int i =0;i<5;i++){
                for(int j = 0;j<5;j++){
                    cout<<"Enter the "<<i<< " and "<< j<<" colunms";
                    cin>>input;
                    A[i][j] = input;
                }
            }

        }
        void to_zero(int A[][5]){
            int input;
            for (int i =0;i<5;i++){
                for(int j = 0;j<5;j++){
                    A[i][j] = 0;
                }
            }

        }
        int **multiply(int times){
            for(int i = 0;i<5;i++){
                for(int j = 0;j<5;j++){
                    B[i][j]+=B[i][j]*A[i][j];   
                }
            }
            return B;

        }

};