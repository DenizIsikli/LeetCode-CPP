#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
        std::vector<int> ans;
        std::unordered_map<int, int> mp;
        for (auto num : nums) mp[num]++;

        std::sort(nums.begin(), nums.end(), [&](int a, int b) {
            return mp[a] == mp[b] ? a > b : mp[a] < mp[b];
        });

        return nums;
    }
};
