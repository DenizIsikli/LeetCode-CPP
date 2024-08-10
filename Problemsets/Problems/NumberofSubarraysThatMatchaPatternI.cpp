#include <vector>

class Solution {
public:
    int countMatchingSubarrays(std::vector<int>& nums, std::vector<int>& pattern) {
        int res = 0;
        int flag = 1;

        for (int i = 0; i < nums.size()-pattern.size(); ++i) {
            int temp = i;
            flag = 1;
            for (int j = 0; j < pattern.size(); ++j) {
                if ((pattern[j]==1 && nums[i] >= nums[i+1]) ||
                   (pattern[j]==-1 && nums[i] <= nums[i+1]) ||
                   (pattern[j]==0 && nums[i] != nums[i+1])) {
                    flag = 0;
                    break;
                }

                ++i;
            }

            if (flag == 1) ++res;
            i = temp;
        }

        return res;
    }
};
