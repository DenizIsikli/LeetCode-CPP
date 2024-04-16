#include <string>

class Solution {
public:
    std::string removeStars(std::string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '*') {
                s.erase(i-1, 2);
                i -= 2;
            }
        }
        return s;
    }
};
