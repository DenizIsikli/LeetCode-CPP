#include <map>
#include <vector>
#include <algorithm>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        std::map<int, int> numToIndex;
        for (int i = 0; i < nums.size(); i++) {
            numToIndex[nums[i]] = i;
        }
        std::sort(nums.begin(), nums.end());
        if (nums.size() == 1) {
            return 0;
        }
        int max_val = nums[nums.size() - 1];
        int second_max_val = nums[nums.size() - 2];
        if (max_val >= 2*second_max_val) {
            return numToIndex[max_val];
        }
        return -1;
    }
};
