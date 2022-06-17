#include <cstdlib>
#include <iostream>
#include <stack>
#include "AVL.h"

using namespace std;

int main(int argc, char *argv[])
{
    int A[]={50,40,80,20,45,90,100,85,75,110,300,200};
    const int n=12;
    int i;
    AVLTree Tree;
    for (i=0;i<n;i++)
    {
        Tree.Insert(A[i]);
    }
    cout << "InOrder  (R):"; Tree.InOrder();   cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
