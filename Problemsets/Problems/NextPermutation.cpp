#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int pivot = 0, swap = 0;
        for (int i = nums.size()-1; i > 0; --i) {
            if (nums[i] > nums[i-1]) {
                pivot = i-1;
                break;
            }
        }

        for (int i = nums.size()-1; i > pivot; --i) {
            if (nums[i] > nums[pivot]) {
                swap = i;
                break;
            }
        }

        if (pivot == 0 && swap == 0) {
            std::reverse(nums.begin(), nums.end());
            return;
        }

        std::swap(nums[pivot], nums[swap]);
        std::reverse(nums.begin()+pivot+1, nums.end());
    }
};
