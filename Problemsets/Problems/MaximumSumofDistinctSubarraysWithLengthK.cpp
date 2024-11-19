#include <vector>
#include <unordered_map>

class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        long long res = 0;
        std::unordered_map<int, int> fq;
        long long curr = 0;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            curr += nums[r];
            fq[nums[r]]++;

            if (r-l+1 > k) {
                fq[nums[l]]--;
                if (fq[nums[l]] == 0) {
                    fq.erase(nums[l]);
                }
                curr -= nums[l];
                l++;
            }

            if (fq.size() == k && (r-l+1) == k) {
                res = std::max(res, curr);
            }
        }
        return res;
    }
};
