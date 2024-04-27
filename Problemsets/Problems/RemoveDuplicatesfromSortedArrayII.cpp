#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        for (int j = 2; j < nums.size(); ++j) {
            if (nums[j] == nums[j-1] && nums[j] == nums[j-2]) {
                nums.erase(nums.begin() + j);
                --j;
            }
        }
        return nums.size();
    }
};
