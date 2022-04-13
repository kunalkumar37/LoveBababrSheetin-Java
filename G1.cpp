#include<bits/stdc++.h>
using namespace std;

//add edge
void addEdge(vector<int>adj[],int s,int d){
    adj[s].push_back(d);
    adj[d].push_back(s);

}

//print the graph
void printgraph(vector<int>adj[],int V){
    for(int d=0;d<V;d++){
        cout<<"vertex"<<d<<":";
        for(auto x:adj[d]){
            cout<<"->"<<x;

        }

        cout<<endl;
    }
}

int main(){
    int V=5;
    //create a graph
    vector<int>adj[V];
    //add edge
    addEdge(adj,0,5);
    addEdge(adj,0,2);
     addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  printgraph(adj, V);
}