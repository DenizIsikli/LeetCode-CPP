#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        int streak = 0;
        std::string temp = "";
        std::vector<std::string> res;
        for (int i = 0; i < nums.size(); i++) {
            int start = nums[i];
            if (i < nums.size()-1 && start+1==nums[i+1]) {
                streak++;
            } else {
                if (streak==0) {
                    temp = std::to_string(start);
                } else {
                    temp = std::to_string(nums[i-streak]) + "->" + std::to_string(start);
                    streak=0;
                }
                res.push_back(temp);
            }
        }
        return res;
    }
};
