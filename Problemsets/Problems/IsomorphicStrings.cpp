#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        int sMap[256] = {0};
        int tMap[256] = {0};
        for (int i = 0; i < s.size(); i++) {
            if (sMap[s[i]] != tMap[t[i]]) {
                return false;
            }
            sMap[s[i]] = i + 1;
            tMap[t[i]] = i + 1;
        }
        return true;
    }
};
