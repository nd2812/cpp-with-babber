#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adj;

        void addEdge(int u,int v,bool direction){
            // direction = 0-> undirected
            // direction = 1-> directed

            // create an edge from u to v
            adj[u].push_back(v);

            if(direction==0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }
};


// BFS(Breadth First Search) in graph
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    unordered_map<int,bool> visited;
    queue<int> q;

    q.push(0);
    while(!q.empty()){
        int front=q.front();
        q.pop();
        if(!visited[front]){

            visited[front]=true;
            
            ans.push_back(front);

            for(int i=0;i<adj[front].size();i++){
                q.push(adj[front][i]);
            }
        }
    }
    return ans;
}

// DFS(Depth First Search) in graph
void dfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,vector<int> &comp){
    comp.push_back(node);
    visited[node]=true;

    // hr connected node k liye recursive call
    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(i,visited,adj,comp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adjList
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
    vector<vector<int>> ans;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> comp;
            dfs(i,visited,adj,comp);
            ans.push_back(comp);
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges "<<endl;
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // creating a undirected graph 
        g.addEdge(u,v,0);
    }

    // graph print
    g.printAdjList();


    return 0;
}