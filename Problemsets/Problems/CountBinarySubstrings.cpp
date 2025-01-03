#include <string>

class Solution {
public:
    int countBinarySubstrings(std::string s) {
        int prev = 0, curr = 1, count = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i]==s[i-1]) {
                curr++;
            } else {
                count += std::min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        count += std::min(prev, curr);
        return count;
    }
};
