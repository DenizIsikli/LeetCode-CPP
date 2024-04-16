#import <vector>
#import <algorithm>

class Solution {
public:
    int minPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int max = 0;
        for (int i = 0; i < nums.size(); ++i) {
            max = std::max(max, nums[i]+nums[nums.size()-1-i]);
        }
        return max;
    }
};
