#include <string>
#include <vector>

class Solution {
public:
    std::string findDifferentBinaryString(std::vector<std::string>& nums) {
        std::string ans = "";

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i][i] == '1') {
                ans += '0';
            } else {
                ans += '1';
            }
        }
        return ans;
    }
};
