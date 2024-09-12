#include <set>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        int cnt = 0;
        std::set<char> allowedSet(allowed.begin(), allowed.end());
        for (const auto& word : words) {
            if (std::all_of(word.begin(), word.end(), [&allowedSet](char c) { return allowedSet.find(c) != allowedSet.end(); })) {
                ++cnt;
            }
        }
        return cnt;
    }
};
