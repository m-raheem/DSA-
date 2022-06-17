#include <iostream>
#include <list>
#define N 8
using namespace std;

class Graph{



    private:
        char v[N];
        
        int E[N][N];
        int n;
    public:
        Graph(){
            n = 0;
            for (int i =0;i<N;i++ ){
                for(int j=0;j<N;j++){
                    E[i][j]=0;
                }
            }
        }
        void addVertex(char Vname){
            int i,j;
            for (i =0;i<N;i++ ){
                if(v[i]==Vname){
                    cout<<"Vertex "<<Vname<<" already present "<<endl;
                    return;
                }
            }
            v[n] = Vname;
            n++;
        }    
        void addedge(char f,char t){
            int i,j;
            for (i =0;i<N;i++ ){
                if(v[i]==f){
                    break;
                }
            }
            for(j=0;j<N;j++){
                if(v[j]==t){
                    break;
                }
        }
        E[i][j]=1;
        E[i][j]=1;
        }

        void display(){
            for (int i =0;i<N;i++ ){
                for(int j=0;j<N;j++){
                    cout<<E[i][j]<<" ";
                }
                cout<<endl;
            }
           
        }

    
};

