#include <vector>

class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        std::vector<int> pos;
        std::vector<int> neg;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        std::vector<int> res;
        for (int i = 0; i < pos.size(); ++i) {
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};
