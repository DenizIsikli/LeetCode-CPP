#include <vector>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> res;
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] > nums[j]) {
                    cnt++;
                }
            }
            res.push_back(cnt);
            cnt = 0;
        }
        return res;
    }
};
