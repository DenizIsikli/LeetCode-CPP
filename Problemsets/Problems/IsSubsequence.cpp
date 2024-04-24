#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int count = 0;
        for (int i = 0; i < t.size() && count < s.size(); ++i) {
            if (t[i] == s[count]) count++;
        }
        return count == s.size();
    }
};
