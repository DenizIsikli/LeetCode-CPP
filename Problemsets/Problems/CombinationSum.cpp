#include <vector>

class Solution {
public:
    void dfs(std::vector<int> &candidates, int target, int start, std::vector<int> &path, std::vector<std::vector<int>> &res) {
        if(target < 0) return;
        if(target == 0) {
            res.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            path.push_back(candidates[i]);
            dfs(candidates, target-candidates[i], i, path, res);
            path.pop_back();
        }
    }

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> res;
        std::vector<int> path;
        dfs(candidates, target, 0, path, res);
        return res;
    }
};
