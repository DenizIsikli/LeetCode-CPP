#include <vector>
#include <algorithm>

class Solution {
public:
    int findMaxK(std::vector<int>& nums) {
        int res = 0;
        std::sort(nums.begin(), nums.end());
        for (int i = nums.size()-1; i >= 0; --i) {
            if (std::find(nums.begin(), nums.end(), -nums[i]) != nums.end()) {
                res = std::abs(nums[i]);
            }
        }
        if (res) return res;
        return -1;
    }
};
