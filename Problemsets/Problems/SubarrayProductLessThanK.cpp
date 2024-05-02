#include <vector>

class Solution {
public:
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
        int res = 0;
        int left = 0;
        int right = 0;
        int product = 1;
        for (right = 0; right < nums.size(); ++right) {
            product *= nums[right];
            while (product >= k && left <= right) {
                product /= nums[left];
                ++left;
            }
            res += right - left + 1;
        }
        return res;
    }
};
