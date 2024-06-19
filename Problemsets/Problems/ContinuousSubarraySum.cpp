#include <vector>
#include <unordered_map>

class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        int ans = 0;
        map[0] = -1;
        for (int i = 0; i < nums.size(); ++i) {
            ans += nums[i];
            int rem = ans%k;

            if (map.find(rem) != map.end()) {
                if (i - map[rem] > 1) {
                    return true;
                }
            } else {
                map[rem] = i;
            }
        }
        return false;
    }
};
