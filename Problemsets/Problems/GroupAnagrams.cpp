#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mp;
        std::vector<std::vector<std::string>> ans;
        for (auto &s : strs) {
            std::string sorted_s = s;
            std::sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(s);
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
