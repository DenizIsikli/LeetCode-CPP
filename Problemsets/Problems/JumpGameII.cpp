#include <vector>

class Solution {
public:
    int jump(std::vector<int>& nums) {
        int current = 0, farthest = 0, jumps = 0;

        for (int i = 0; i < nums.size()-1; ++i) {
            farthest = std::max(farthest, nums[i]+i);
            if (i == current) current = farthest, jumps++;
        }
        return jumps;
    }
};
