#include <vector>

class Solution {
public:
    std::vector<int> minBitwiseArray(std::vector<int>& nums) {
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int j = 0, flag = 1;
            while (j < nums[i]) {
                if ((j|j+1) == nums[i]) {
                    res.push_back(j);
                    flag = 0;
                    break;
                }
                j++;
            }
            if (flag) res.push_back(-1);
        }
        return res;
    }
};
