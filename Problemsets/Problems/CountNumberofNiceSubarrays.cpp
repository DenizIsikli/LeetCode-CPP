#include <vector>
#include <queue>

class Solution {
public:
    int numberOfSubarrays(std::vector<int>& nums, int k) {
        int ans=0, cnt=0;
        for (int l=0, r=0; r < nums.size(); ++r) {
            if (nums[r]&1) {
                --k;
                cnt = 0;
            }

            while (k==0) {
                ++cnt;
                k += nums[l++]&1;
            }
            ans += cnt;
        }
        return ans;
    }
};
