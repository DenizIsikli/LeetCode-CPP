#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> prefix_sum(nums.size(), 1);
        std::vector<int> suffix_sum(nums.size(), 1);

        for (int i = 1; i < nums.size(); ++i) {
            prefix_sum[i] = prefix_sum[i-1] * nums[i-1];
        }

        for (int i = nums.size()-2; i >= 0; --i) {
            suffix_sum[i] = suffix_sum[i+1] * nums[i+1];
        }

        std::vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            result.push_back(prefix_sum[i] * suffix_sum[i]);
        }
        return result;
    }
};
