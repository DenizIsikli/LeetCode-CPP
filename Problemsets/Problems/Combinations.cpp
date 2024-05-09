#include <vector>

class Solution {
public:
    void dfs(std::vector<std::vector<int>>& res, std::vector<int>& path, int start, int n, int k) {
        if (path.size() == k) {
            res.push_back(path);
            return;
        }

        for (int i = start; i < n+1; ++i) {
            path.push_back(i);
            dfs(res, path, i+1, n, k);
            path.pop_back();
        }
    }

    std::vector<std::vector<int>> combine(int n, int k) {
        std::vector<std::vector<int>> res;
        std::vector<int> path;
        dfs(res, path, 1, n, k);
        return res;
    }
};
