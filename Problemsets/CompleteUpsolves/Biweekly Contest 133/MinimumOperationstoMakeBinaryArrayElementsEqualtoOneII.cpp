#include <vector>

class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int ans = 0;
        int current = 0;
        for (int num : nums) {
            if ((num==0 && current==0) || (num==1 && current==1)) {
                ++ans;
                current = 1-current;
            }
        }        
        return ans;
    }
};
