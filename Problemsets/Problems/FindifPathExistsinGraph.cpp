#include <vector>

class Solution {
public:
    bool dfs(int source, int destination, std::vector<int> adj[], std::vector<int> &visited) {
        visited[source] = 1;
        for (auto it : adj[source]) {
            if (!visited[it]) {
                if (it == destination) return true;
                if (dfs(it, destination, adj, visited)) return true;
            }
        }
        return false;
    }

    bool validPath(int n, std::vector<std::vector<int>>& edges, int source, int destination) {
        std::vector<int> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        if (source == destination) return true;
        std::vector<int> visited(n,0);
        return dfs(source, destination, adj, visited);
    }
};
