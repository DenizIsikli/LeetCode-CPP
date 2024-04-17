#include <vector>
#include <algorithm>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[i] > nums[j]) {
                    std::swap(nums[i], nums[j]);
                }
            }
        }
    }
};
