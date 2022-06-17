#include "Graph.h"

int main(){
    Graph g;
        g.addVertex('A');
        g.addVertex('B');
        g.addVertex('C');
        g.addVertex('D');
        g.addVertex('E');
        g.addVertex('F');
        g.addVertex('G');
        g.addVertex('H');
        g.addVertex('C');
        
        g.addedge('A','A');
        g.addedge('B','B');
        g.addedge('C','C');
        g.addedge('D','D');
        g.addedge('E','E');
        g.addedge('F','F');
        g.addedge('G','G');
        g.addedge('H','H');
        g.addedge('A','H');
        g.addedge('H','A');
        g.display();

    
}