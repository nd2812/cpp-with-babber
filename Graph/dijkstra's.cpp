// Dijkstra's shortest path
#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> dist(vertices);
    for(int i=0;i<vertices;i++){
        dist[i]=INT_MAX;
    }

    // creation of set on the basis (distance,node)
    set<pair<int,int>> st;
    
    dist[source]=0;
    st.insert(make_pair(0,source));

    while(!st.empty()){
        //  fetch top
        auto top = *(st.begin());

        int nodeDistance=top.first;
        int topNode=top.second;

        // remove top record now

        st.erase(st.begin());

        // neigh traversal
        for(auto neigh:adj[topNode]){
            if(nodeDistance+neigh.second<dist[neigh.first]){
                auto record=st.find(make_pair(dist[neigh.first],neigh.first));

                // if record found,then erase it
                if(record !=st.end()){
                    st.erase(record);
                }

                // distance update
                dist[neigh.first]=nodeDistance+neigh.second;

                // record push in set
                st.insert(make_pair(dist[neigh.first],neigh.first));
            }
        }
    }

    return dist;
}


int main() {
    
    return 0;
}

/*
Sample input 1
2
5 7
0 1 7
0 2 1
0 3 2
1 2 3
1 3 5 
1 4 1
3 4 7
4 5
0 1 5
0 2 8
1 2 9
1 3 2
2 3 6
Sample output 1
0 4 1 2 5
0 5 8 7
*/