#include <vector>

class Solution {
public:
    int numberOfArithmeticSlices(std::vector<int>& nums) {
        if(nums.size()<3) return 0;
        std::vector<int> dp(nums.size(), 0);
        int ans = 0;
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i]-nums[i-1] == nums[i-1]-nums[i-2]) {
                dp[i] = dp[i-1]+1;
                ans+=dp[i];
            }
        }
        return ans;
    }
};
