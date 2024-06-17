// Kosaraju's Algorithm for finding Strongly Connected Components.
// Problem statement
// You are given an unweighted directed graph having 'V' vertices and 'E' edges. Your task is to count the number of strongly connected components (SCCs) present in the graph.
// A directed graph is said to be strongly connected if every vertex is reachable from every other vertex. The strongly connected components of a graph are the subgraphs which are themselves strongly connected.
#include<bits/stdc++.h>
using namespace std;

void revdfs(int node,unordered_map<int,bool> &vis,unordered_map<int,list<int>> &transpose){
    vis[node]=true;

    for(auto nbr:transpose[node]){
        if(!vis[nbr]){
            revdfs(nbr,vis,transpose);
        }
    }
}

void dfs(int node,unordered_map<int,bool> &vis,stack<int> &st,unordered_map<int,list<int>> &adj){
    vis[node]=true;

    for(auto nbr:adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,st,adj);
        }
    }
    // topo logic
    st.push(node);
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
    }

    // topo SOrt 
    stack<int> st;
    unordered_map<int,bool> vis;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }

    // create a transpose graph
    unordered_map<int,list<int>> transpose;
    for(int i=0;i<v;i++){
        vis[i]=0;
        for(auto nbr:adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    int count=0;
    // dfs call using above ordering
    while(!st.empty()){
        int top=st.top();
        st.pop();
        if(!vis[top]){
            count++;
            revdfs(top,vis,transpose);
        }
    }
    return count;
}

int main() {
    
    return 0;
}
/*
Sample Input 1 :
1
5 6
0 1
1 2
1 4
2 3
3 2
4 0
Sample Output 1 :
2
*/