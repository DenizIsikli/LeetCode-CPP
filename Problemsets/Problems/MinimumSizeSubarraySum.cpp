#include <vector>
#include <climits>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int ans = 0;
        int l = 0, r = 0;
        int sum = 0;
        int mn = INT_MAX;
        while (r < nums.size()) {
            sum += nums[r];
            while (sum >= target) {
                mn = std::min(mn, r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return (mn == INT_MAX ? 0 : mn);
    }
};
