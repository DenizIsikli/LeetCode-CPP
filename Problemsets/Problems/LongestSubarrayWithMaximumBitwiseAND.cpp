#include <vector>
#include <algorithm>

class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int maxAnd=*std::max_element(nums.begin(), nums.end());
        int maxLength=0,currentLength=0;
        for (int num : nums) {
            if (num==maxAnd)currentLength++;
            else{
                maxLength=std::max(maxLength,currentLength);
                currentLength=0;
            }
        }
        return std::max(maxLength,currentLength);
    }
};
