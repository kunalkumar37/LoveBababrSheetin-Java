//detect a cycle in directed graph using BFS algorithm

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool iscyclicusingbfs(vector<int>adj[],int N){
            vector<int>indegree(N,0);
            queue<int>q;
            for(int i=0;i<N;i++){
                for(auto  it:adj[i]){
                    indegree[it]++;

                }
            
            }

            for(int i=0;i<N;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }


            int count=0;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                count++;
                for(auto i:adj[node]){
                    indegree[i]--;
                    if(indegree[i]==0){
                        q.push(i);
                    }
                    
                }
            }

            if(count==N){
                return false;
            }
            return true;
            
            
                    }
};
int main(){
   	vector<int> adj[6];
    	adj[5].push_back(2);
    	adj[5].push_back(0);
    	adj[4].push_back(0);
    	adj[4].push_back(1);
    	adj[3].push_back(1);
    	adj[2].push_back(3);

        Solution obj;
        if(obj.iscyclicusingbfs(adj,6)){
            cout<<"true";
        }
        else{
            cout<<"False";
        }

    return 0;
}