#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        std::vector<std::pair<int, int>> freq_vec;
        for (const auto &p : freq) {
            freq_vec.push_back(p);
        }
        std::sort(freq_vec.begin(), freq_vec.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
            return a.second > b.second;
        });
        std::vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(freq_vec[i].first);
        }
        return ans;
    }
};
