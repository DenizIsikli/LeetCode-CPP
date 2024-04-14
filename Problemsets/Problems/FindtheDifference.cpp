#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }
        return t[t.size()-1];
    }
};
