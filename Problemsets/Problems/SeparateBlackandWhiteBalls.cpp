#include <string>

class Solution {
public:
    long long minimumSteps(std::string s) {
        int black = 0;
        long long swap = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') swap += (long long) black;
            else black++;
        }
        return swap;
    }
};
