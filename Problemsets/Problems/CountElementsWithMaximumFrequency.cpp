#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int maxFreq = 0;
        for (int i = 0; i < nums.size(); ++i) {
            maxFreq = std::max(maxFreq, mp[nums[i]]);
        }
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp[nums[i]] == maxFreq) {
                count++;
            }
        }
        return count;
    }
};
