// prim's MST
#include<bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // crate adj list
    unordered_map<int,list<pair<int,int>>> adj;

    for(int i=0;i<g.size();i++){
        int u=g[i].first.first;
        int v=g[i].first.second;

        int w=g[i].second;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> key(n+1);
    vector<bool> mst(n+1);
    vector<int> parent(n+1);

    for(int i=0;i<=n;i++){
        key[i]=INT_MAX;
        mst[i]=false;
        parent[i]=-1;
    }

    // lets start algo
    key[1]=0;
    parent[1]=-1;

    for(int i=0;i<n;i++){

        int mini=INT_MAX;
        int u;

        for(int v=1;v<=n;v++){
            if(mst[v]==false && key[v]<mini){
                u=v;
                mini=key[v];
            }
        }

        // mark mini node as true
        mst[u] = true;

        // check its adjacent node
        for(auto it:adj[u]){
            int v=it.first;
            int w=it.second;

            if(mst[v]==false && w<key[v]){
                parent[v]=u;
                key[v]=w;
            }
        }
    }

    vector<pair<pair<int, int>, int>> result;
    for(int i=2;i<=n;i++){
        result.push_back({{parent[i], i}, key[i]});
    }
    return result;
}


int main() {
    
    return 0;
}

// Sample Input 1 :
// 1
// 5 14
// 1 2 2
// 1 4 6
// 2 1 2
// 2 3 3
// 2 4 8
// 2 5 5
// 3 2 3
// 3 5 7
// 4 1 6
// 4 2 8
// 4 5 9
// 5 2 5
// 5 3 7
// 5 4 9
// Sample Output 1 :
// 1 2 2
// 1 4 6
// 2 3 3
// 2 5 5