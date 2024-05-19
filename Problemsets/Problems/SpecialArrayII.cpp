#include <vector>

class Solution {
public:
    std::vector<bool> isArraySpecial(std::vector<int>& nums, std::vector<std::vector<int>>& queries) {
        std::vector<int> temp;
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i]%2 == nums[i-1]%2) temp.push_back(i);
        }

        std::vector<bool> ans;
        for (auto &q : queries) {
            int l = std::upper_bound(temp.begin(), temp.end(), q[0]) - temp.begin();
            int r = std::lower_bound(temp.begin(), temp.end(), q[1]) - temp.begin();
            if (r-l == 0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};

