#include <vector>
#include <queue>
#include <utility>

class Solution {
public:
    double maxProbability(int n, std::vector<std::vector<int>>& edges, std::vector<double>& succProb, int start_node, int end_node) {
        std::vector<std::pair<int, double>> adj[n];
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        std::vector<double> prob(n, 0);
        prob[start_node] = 1.0;
        std::queue<std::pair<int, double>> q;
        q.push({start_node, 1.0});
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            for (auto v : adj[it.first]) {
                if (prob[v.first] < (it.second*v.second)) {
                    prob[v.first] = it.second*v.second;
                    q.push({v.first, prob[v.first]});
                }
            }
        }
        return prob[end_node]; 
    }
};
