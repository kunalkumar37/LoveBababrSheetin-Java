//Dijkstra'a algorithm
// Given a weighted ,undirected,and connected graph of V vertices and E edges

//We would be using a min-heap and a distance array of size N initialized with infinity (indicating that at present none of the nodes are reachable from the source node) and initialize the distance to source node as 0.


//we push the source node to the queue


// For every node at the top of the queue we pop that element out and look out for its adjacent nodes. If the current reachable distance is better than the previous distance indicated by the distance array, we update the distance and push it in the queue.

//A node with a lower distance would be at the top of the priority queue as opposed to a node with a higher distance. By following the steps 3, until our queue becomes empty, we would get the minimum distance from the source node to all other nodes. Here’s a quick demonstration of the same.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,m=6,source=1;
	vector<pair<int,int> > g[n+1]; 	// assuming 1 based indexing of graph
	// Constructing the graph
	g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});


    //algorithms start
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push(make_pair(0,source));

    vector<int>disto(n+1,INT_MAX);
    disto[source]=0;

    while(!pq.empty()){
        int dist=pq.top().first;
        int prev=pq.top().second;
        pq.pop();

        vector<pair<int,int>>::iterator it;
        for(it=g[prev].begin();it!=g[prev].end();it++){
            int next=it->first;
            int nextdist=it->second;
            if(disto[next]>disto[prev]+nextdist){
                disto[next]=disto[prev]+nextdist;
                pq.push(make_pair(disto[next],next));
            }
        }
    }

    cout<<"the cost of travelling from source to distance is "<<endl;
    for(int i= 1;i<n+1;i++){
        cout<<disto[i]<<" ";
    }
return 0;
}
//Time complexity is O(N+E)*log n for n for all nodes and e for going to every edges and logn is because of priority queue
