#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> path;
        backtrack(nums,0,path,ans);
        return ans;
    }

    void backtrack(std::vector<int> &nums, int start, std::vector<int> &path, std::vector<std::vector<int>> &ans) {
        ans.push_back(path);
        for (int i = start; i < nums.size(); ++i) {
            path.push_back(nums[i]);
            backtrack(nums, i+1, path, ans);
        }
    }
};
