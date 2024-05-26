#include <vector>
#include <algorithm>

class Solution {
public:
    void backtrack(std::vector<int> nums, int start, int &ans) {
        if (start==nums.size()) {
            ans++;
            return;
        }

        for (int i = start; i < nums.size(); ++i) {
            std::swap(nums[start], nums[i]);
            if (nums[start]%(start+1)==0 || (start+1)%nums[start]==0)
                backtrack(nums, start+1, ans);
            std::swap(nums[start], nums[i]);
        }
    }

    int countArrangement(int n) {
        std::vector<int> nums;
        for (int i = 1; i <= n; ++i) nums.push_back(i);
        int ans;
        backtrack(nums, 0, ans);
        return ans;
    }
};
