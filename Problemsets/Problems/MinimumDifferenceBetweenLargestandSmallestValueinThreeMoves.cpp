#include <vector>
#include <algorithm>

class Solution {
public:
    int minDifference(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0;
        int minVal = INT_MAX;
        std::sort(nums.begin(), nums.end());
        minVal = std::min(minVal, nums[n-4] - nums[0]);
        minVal = std::min(minVal, nums[n-3] - nums[1]);
        minVal = std::min(minVal, nums[n-2] - nums[2]);
        minVal = std::min(minVal, nums[n-1] - nums[3]);
        return minVal;
    }
};
