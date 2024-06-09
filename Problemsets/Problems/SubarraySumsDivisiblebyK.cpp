#include <vector>

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        int ans = 0;
        std::vector<int> prefixSum(nums.size()+1, 0);
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        std::vector<int> count(k, 0);
        for (int i = 0; i < prefixSum.size(); ++i) {
            int mod = (prefixSum[i] % k + k) % k;
            ans += count[mod];
            count[mod]++;
        }
        return ans;
    }
};
