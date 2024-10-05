#include <string>
#include <algorithm>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        std::sort(s1.begin(), s1.end());
        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            std::string sub = s2.substr(i, s1.size());
            std::sort(sub.begin(), sub.end());
            if (sub == s1) {
                return true;
            }
        }
        return false;
    }
};
