#include <vector>

class Solution {
public:
    int totalHammingDistance(std::vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            for (int num : nums) {
                if ((num & (1 << i)) != 0) cnt++;
            }

            int countOff = nums.size() - cnt;
            ans += (cnt*countOff);
        }
        return ans;
    }
};
