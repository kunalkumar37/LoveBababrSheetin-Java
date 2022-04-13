//Detect a cycle in undirected graph using BFS
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool checkforcyclef(int node,int parent,vector<int>&vis,vector<int>adj[]){
            vis[node]=true;
            queue<pair<int,int>>q;
            q.push({node,-1});
            while(!q.empty()){

                int g=q.front().first;
                int p=q.front().second;
                q.pop();
                for(auto it:adj[g]){
                    if(!vis[it]){
                        vis[it]=true;
                        q.push({it,node});

                    }
                    else if(p!=it){
                        return true;
                    }
                }
            }
            return false;
        }


    public:
        bool iscycle(vector<int>adj[],int V){
            vector<int>vis(V+1,0);
            for(int i=0;i<V;i++){
                if(!vis[i]){
                    if(checkforcyclef(i,-1,vis,adj)){
                        return true;
                    }
                }
            }

            return false;
        }
};




void addEdge(vector<int>adj[],int u,int v){
adj[u].push_back(v);
adj[v].push_back(u);
}

int main(){
    int V=5;
    vector<int>adj[V];

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
   Solution obj;
   if(obj.iscycle(adj,V)){
       cout<<"Cycle Detected";
   }
   else{
       cout<<"Cycle not detected";
   }
   return 0;

}