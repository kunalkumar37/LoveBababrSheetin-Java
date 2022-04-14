//making wired connections
#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(vector<vector<int>>&adj,vector<bool>&visited,int src){
        visited[src]=true;
        for(auto i:adj[src]){
            if(!visited[i]){
                dfs(adj,visited,i);
            }
        }
    }


public:


    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        //adjacency list
        vector<vector<int>>adj(n);
       for(auto i:connections){
           adj[i[0]].push_back(i[1]);
           adj[i[1]].push_back(i[0]);
       }


       vector<bool>vis(n,false);
       int components=0;
       for(int i=0;i<n;i++){
           if(!vis[i]){
               dfs(adj,vis,i);
               components++;
           }
       }
    return components-1;
    }
};

int main(){
    

}