#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
        int n = names.size();
        std::unordered_map<int, std::string> mp;
        for (int i = 0; i < n; ++i) mp[heights[i]] = names[i];
        std::sort(heights.rbegin(), heights.rend());
        for (int i = 0; i < n; ++i) names[i] = mp[heights[i]];
        return names;
    }
};
