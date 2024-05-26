#include <vector>
#include <unordered_set>

class Solution {
public:
    void backtracking(std::vector<int> &nums, int start, std::vector<int> &path, std::vector<std::vector<int>> &ans) {
        if (path.size()>=2) ans.push_back(path);
        std::unordered_set<int> used;
        for (int i = start; i < nums.size(); ++i) {
            if (!path.empty() && nums[i]<path.back()) continue;
            if (used.count(nums[i])) continue;
            used.insert(nums[i]);
            path.push_back(nums[i]);
            backtracking(nums, i+1, path, ans);
            path.pop_back();
        }
    }

    std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> path;
        backtracking(nums, 0, path, ans);
        return ans;
    }
};
