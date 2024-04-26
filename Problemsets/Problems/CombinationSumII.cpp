#include <vector>
#include <algorithm>

class Solution {
public:
    void dfs(std::vector<int> &candidates, int target, int start, std::vector<int> &path, std::vector<std::vector<int>> &res) {
        if (target < 0) return;
        if (target == 0) {
            res.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            path.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i + 1, path, res);
            path.pop_back();
        }
    }

    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> res;
        std::vector<int> path;
        dfs(candidates, target, 0, path, res);
        return res;
    }
};
