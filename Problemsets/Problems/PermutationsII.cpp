#include <set>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> res;

    void backtrack( std::vector<int> &nums, int start) {
        if (start == nums.size()) {
            res.push_back(nums);
            return;
        }

        std::set<int> used;
        for (int i = start; i < nums.size(); ++i) {
            if (used.count(nums[i])) continue;
            used.insert(nums[i]);
            std::swap(nums[start], nums[i]);
            backtrack(nums, start + 1);
            std::swap(nums[start], nums[i]);
        }
    }

    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums) {
        int start = 0;
        backtrack(nums, start);
        return res;
    }
};
