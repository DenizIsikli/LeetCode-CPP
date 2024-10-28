#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int longestSquareStreak(std::vector<int>& nums) {
        std::map<int, int> mp;
        sort(nums.begin(), nums.end());
        int res = -1;
        for (int num : nums) {
            int _sqrt = std::sqrt(num);
            if (_sqrt*_sqrt == num && mp.find(_sqrt) != mp.end()) {
                mp[num] = mp[_sqrt]+1;
                res = std::max(res, mp[num]);
            } else mp[num] = 1;
        }
        return res;
    }
};
