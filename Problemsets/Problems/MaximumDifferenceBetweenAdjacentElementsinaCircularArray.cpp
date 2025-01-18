#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res = max(res, abs(nums[i] - nums[(i+1) % nums.size()]));
        }
        return res;
    }
};
