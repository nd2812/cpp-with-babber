// Bellman Ford Algorithm for finding Shortest Path or Negative Cycles in Graph
// use for directed graph with negative weight
// Problem statement
// You have been given a directed weighted graph of ‘N’ vertices labeled from 1 to 'N' and ‘M’ edges. Each edge connecting two nodes 'u' and 'v' has a weight 'w' denoting the distance between them.
// Your task is to calculate the shortest distance of all vertices from the source vertex 'src'.
#include<bits/stdc++.h>
using namespace std;

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    vector<int> d(n + 1, 1e8);
    // Distance of source to source is 0.
    d[src] = 0;

    // Apply bellmonford algorithm.
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if (d[u] != 1e9 && d[v] > (d[u] + w)) {
                d[v] = d[u] + w;
            }
        }
    }

    // Return the distance of destination.
    return d;
    
}

int main() {
    
    return 0;
}
/*
Sample Input 1 :
4 4 1
1 2 4
1 3 3
2 4 7 
3 4 -2
Sample Output 1 :
0 4 3 1
*/