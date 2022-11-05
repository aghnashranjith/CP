#include <bits/stdc++.h>

bool cycledfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited)
{
    visited[node] = 1;
    dfsvisited[node] = 1;
    
    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            bool b = cycledfs(i, adj, visited, dfsvisited);
            if(b) return true;
        }
        else if(dfsvisited[i])
            return true;
    }
    dfsvisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].push_back(v);
    }
    
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            bool cycle = cycledfs(i, adj, visited, dfsvisited);
            if(cycle) return 1;
        }
    }
    return 0;
}