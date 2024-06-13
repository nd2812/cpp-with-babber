// Shortest path in a directed acyclic graph
#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<pair<int,int>>> adj;

        void addEdge(int u,int v,int weight){
            pair<int,int> p=make_pair(v,weight); 
            adj[u].push_back(p);
        }

        void printAdj(){
            for(auto i:adj){
                cout<< i.first <<" -> ";
                for(auto j:i.second){
                    cout<<"("<<j.first<<","<<j.second<<"),";
                }cout<<endl;
            }
        }

        void dfs(int node,unordered_map<int,bool> &visited,stack<int> &s){
            visited[node]=true;

            for(auto neigh:adj[node]){
                if(!visited[neigh.first]){
                    dfs(neigh.first,visited,s);
                }
            } 
            s.push(node);
        }

        void getShortestPath(int src,vector<int> &dis,stack<int> &s){
            dis[src]=0;

            while(!s.empty()){
                int top=s.top();
                s.pop();

                if(dis[top]!=INT_MAX){
                    for(auto i:adj[top]){
                        if(dis[top]+i.second<dis[i.first]){
                            dis[i.first]=dis[top]+i.second;
                        }     
                    } 
                }

            }
        }
};

int main() {
    graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.printAdj();

    int n=6;
    unordered_map<int,bool> visited;
    stack<int> s;
    // topological sort
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    }

    int src=1;
    vector<int> dis(n);
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }

    g.getShortestPath(src,dis,s);

    cout<<"answer is: "<<endl;
    for(int i=0;i<dis.size();i++){
        cout<<dis[i]<<" ";
    }cout<<endl;
    return 0;
}