#include <vector>
#include <unordered_map>

class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        std::unordered_map<int, int> prefixSum;
        int sum = 0;
        int maxLength = 0;
        prefixSum[0] = -1;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i] == 0 ? -1 : 1;
            if (prefixSum.find(sum) != prefixSum.end()) {
                maxLength = std::max(maxLength, i-prefixSum[sum]);
            } else {
                prefixSum[sum] = i;
            }
        }
        return maxLength;
    }
};
