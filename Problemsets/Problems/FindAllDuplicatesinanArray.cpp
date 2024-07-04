#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::vector<int> ans;
        std::unordered_map<int, int> freq;
        for (auto num : nums) {
            freq[num]++;
            if (freq[num] == 2) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
