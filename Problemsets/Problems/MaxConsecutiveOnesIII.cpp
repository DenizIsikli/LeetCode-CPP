#include <vector>

class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int res = 0;
        int cnt = 0;
        int left = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) ++cnt;

            while (cnt > k) {
                if (nums[left] == 0) --cnt;
                ++left;
            }

            res = std::max(res, i-left+1);
        }
        return res;
    }
};
