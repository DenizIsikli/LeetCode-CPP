#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for (int num : nums) ++freq[num];
        std::vector<int> ans;
        for (auto [num, count] : freq) {
            if (count == 1) ans.push_back(num);
        }
        return ans;
    }
};
