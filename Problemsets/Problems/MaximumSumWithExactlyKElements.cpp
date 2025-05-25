#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int res = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        int mx = nums[0];
        for (int i = 0; i < k; i++) {
            res += mx;
            mx++;
        }
        return res;
    }
};
