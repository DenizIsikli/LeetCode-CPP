#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        int res = 0;
        res = std::max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
        return res;
    }
};
