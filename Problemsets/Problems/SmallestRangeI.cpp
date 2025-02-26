#include <vector>

using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        return max((mx-k)-(mn+k), 0);
    }
};
