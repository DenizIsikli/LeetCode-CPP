#include <vector>
#include <algorithm>

class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int len = 1;
        int mx = *std::max_element(nums.begin(), nums.end());

        int tmp_len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == mx) {
                tmp_len++;
            } else {
                len = std::max(len, tmp_len);
                tmp_len = 0;
            }
        }
        return len;
    }
};
