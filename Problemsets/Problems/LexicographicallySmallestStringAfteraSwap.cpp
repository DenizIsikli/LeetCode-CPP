#include <string>

class Solution {
public:
    std::string getSmallestString(std::string s) {
        for (int i = 1; i < s.size(); i++) {
            if (s[i]%2==s[i-1]%2 && s[i]<s[i-1]) {
                std::swap(s[i], s[i-1]);
                break;
            }
        }
        return s;
    }
};
