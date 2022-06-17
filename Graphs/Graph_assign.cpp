#include <iostream>
#include <list>
#include <iterator>


#define MAX_NODES 10
using namespace std;

class Graph
{
	private:
		int n;
		char arr[MAX_NODES];
		list<char> V[MAX_NODES];
		int A[MAX_NODES][MAX_NODES] = {{0,1,1,1},{0,0,0,1},{0,0,0,0},{0,0,0,0}};
		int ARR[MAX_NODES][MAX_NODES] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	public:
		Graph()
		{
		
			n=0;
			
		}
		int search(char vertex)
		{
			for (int i =0;i<n;i++){
				// list<int>::iterator it;
				// for (it=V[i].begin();it!=V[i].end();++it){
				// 		return *it;
				// 	}
				if (V[i].front()==vertex){
					return 1;
				};

			}
			return -1;
		}
		void addVertex(char vertex)
		{		
			if (search(vertex)<0)
			{
				V[n].push_back(vertex);
				arr[n]=vertex;
				n++;
			}
			else
				cout <<"vertex already added" << endl;
		}
		void addEdge(char from, char to)
		{
			int f=search(from);
			int t=search(to);
			if (f<0 || t<0)
				{	cout << from <<" vertex " << to <<" not found " << endl;
					return;
				}
			for (int i =0;i<n;i++){
				if (V[i].front()==from){
					V[i].push_back(to);
				};	
    
		}
		}
		
		void showList(){
			list<char>::iterator it;
			for(int i=0;i<n;i++){
				for (it = V[i].begin(); it != V[i].end(); ++it)
					cout << *it<<"->";
				cout << "NULL\n";
			}
}

		void twoDtolist(){
			string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			int size = 4;
			//cout<<size<<endl;
			for (int i=0;i<size;i++){
				addVertex(a[i]);
			}
			for (int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					if (A[i][j]==1){
						char c = arr[j];
						addEdge(V[i].front(),c);
					}

				}
				
			}
			showList();

		}
		void showMatrix(){
			for (int i=0;i<n;i++){
				for(int j =0;j<n;j++){
					cout<<ARR[i][j]<<" ";
				}
				cout<<'\n';
			}
		}
		void listtotwoD(){
			//cout<<n<<endl;
			list<char>::iterator it;
			int count;
			for(int i=0;i<n;i++){
				count =0;
				char ch;
				for (it = V[i].begin(); it != V[i].end(); ++it){
					
					if (count==0){
						//cout<<1<<endl;
						count++;
					}
					else{
					for(int j=0;j<n;j++){
						//cout<<arr[j]<<endl;
						ch = *it;
						//cout<<ch<<arr[j]<<endl;
						//cout<<2<<endl;
						if(arr[j]==ch){
								//cout<<"matched"<<endl;
								ARR[i][j]=1;
						}
					}
					}
					// cout<<12<<endl;
		}
		}
		showMatrix();
		}


		
		// {
		// 	for (int i=0;i<n;i++)
		// 	{
		// 		for (int j=0;j<n;j++)
		// 			cout << A[i][j] << " ";					
		// 		cout << endl;
		// 	}
		// 

		
		
};


int main(int argc, char** argv) {
	Graph g;
	// g.addVertex('a');
	// g.addVertex('b');
	// g.addVertex('c');
	// g.addVertex('d');
	// g.addVertex('e');
	// g.addVertex('f');
	// g.addVertex('g');
	//g.addVertex('a');
	
	// g.addEdge('a','b');
	// g.addEdge('a','c');
 	// g.addEdge('a','d');
 	// g.addEdge('b','d');
 	//g.addEdge('c','e');
 	//g.addEdge('c','f');
 	//g.addEdge('e','f');
 	//g.addEdge('f','a');
 	//g.addEdge('a','x');
 	//g.showList();
	//  g.twoDtolist();
	//  cout<<endl;
	 
	 g.twoDtolist();
	 g.listtotwoD();
	 //g.showMatrix();
	//  cout<<endl;
	 	
	return 0;
}
