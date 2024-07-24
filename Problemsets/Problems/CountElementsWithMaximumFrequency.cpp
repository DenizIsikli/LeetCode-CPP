#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        std::map<int, int> mp;
        for (int num : nums) mp[num]++;
        int maxFreq = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxFreq = std::max(maxFreq, mp[i]);
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp[i] == maxFreq) cnt++;
        }
        return cnt;
    }
};
