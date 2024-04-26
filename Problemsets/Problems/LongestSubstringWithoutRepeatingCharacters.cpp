#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.size() == 0) return 0;
        std::unordered_set<char> seen;
        int ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (seen.find(s[i]) == seen.end()) {
                seen.insert(s[i]);
            } else {
                ans = std::max(ans, (int)seen.size());
                while (seen.find(s[i]) != seen.end()) {
                    seen.erase(s[i - seen.size()]);
                }
                seen.insert(s[i]);
            }
        }
        return std::max(ans, (int)seen.size());
    }
};
