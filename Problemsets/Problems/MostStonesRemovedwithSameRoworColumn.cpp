#include <vector>

class Solution {
public:
    void dfs(int idx, std::vector<bool> &vis, std::vector<std::vector<int>> &stones) {
        vis[idx] = true;
        for (int i = 0; i < stones.size(); i++) {
            if (!vis[i]) {
                if (stones[idx][0] == stones[i][0]) dfs(i, vis, stones);
                if (stones[idx][1] == stones[i][1]) dfs(i, vis, stones);
            }
        }
    }

    int removeStones(std::vector<std::vector<int>>& stones) {
        int res = 0;
        std::vector<bool> vis(stones.size());
        for (int i = 0; i < stones.size(); i++) {
            if (!vis[i]) {
                dfs(i, vis, stones);
                res += 1;
            }
        }
        return stones.size()-res;
    }
};
