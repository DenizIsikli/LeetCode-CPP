#include <vector>
#include <algorithm>

class Solution {
public:
    int minMoves2(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int res = 0;
        int mid = nums[nums.size()/2];
        for (auto &num : nums) {
            res += std::abs(num-mid);
        }
        return res;
    }
};
