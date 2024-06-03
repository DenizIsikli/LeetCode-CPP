#include <string>

class Solution {
public:
    int appendCharacters(std::string s, std::string t) {
        int l = 0, r = 0;
        while (r < s.size() && l < t.size()) {
            if (s[r]==t[l]) ++r, ++l;
            else ++r;
        }
        return t.size()-l;
    }
};
