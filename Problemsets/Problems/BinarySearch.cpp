#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] == target) return m;
            if (nums[m] < target) l = m + 1;
            else r = m;
        }
        return -1;
    }
};
