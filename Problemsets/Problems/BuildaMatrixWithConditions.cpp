#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> khan(int k, vector<vector<int>> &conditions) {
        vector<int> graph[k];
        vector<int> degree(k, 0);

        for (auto con : conditions) {
            graph[con[0]].push_back(con[1]);
            degree[con[1]]++;
        }

        queue<int> q;
        for (int i = 1; i < k; i++) {
            if (degree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> res;
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            res.push_back(t);
            for (auto x : graph[t]) {
                degree[x]--;
                if (degree[x]==0) {
                    q.push(x);
                }
            }
        }

        return res;
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> r = khan(k+1, rowConditions);
        vector<int> c = khan(k+1, colConditions);
        if (r.size()<k || c.size()<k) { return {}; }
        unordered_map<int, int> mp;
        for (int i = 0; i < k; i++) {
            mp[c[i]] = i;
        }
        vector<vector<int>> res(k, vector<int>(k, 0));
        for (int i = 0; i < k; i++) {
            int col_pos = mp[r[i]];
            res[i][col_pos] = r[i];
        }
        return res;
    }
};
