#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> res(n);
        int maxXor = (1 << maximumBit) - 1;
        int currentXor = 0;

        for (int i = 0; i < n; ++i) {
            currentXor ^= nums[i];
        }

        for (int i = n - 1; i >= 0; --i) {
            res[i] = currentXor ^ maxXor;
            currentXor ^= nums[i];
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
