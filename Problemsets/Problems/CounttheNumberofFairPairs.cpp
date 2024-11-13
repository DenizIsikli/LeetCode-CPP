#include <vector>
#include <algorithm>

class Solution {
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        long long res = 0;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size()-1; i++) {
            auto up = std::upper_bound(nums.begin()+i+1, nums.end(), upper-nums[i]);
            auto low = std::lower_bound(nums.begin()+i+1, nums.end(), lower-nums[i]);
            res += up - low;
        }
        return res;
    }
};
