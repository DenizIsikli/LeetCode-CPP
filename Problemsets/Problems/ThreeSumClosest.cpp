#include <vector>
#include <algorithm>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int min = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (min == 0 || abs(target - sum) < abs(target - min)) min = sum;
                if (sum < target) ++l;
                else --r;
            }
        }
        return min;
    }
};
