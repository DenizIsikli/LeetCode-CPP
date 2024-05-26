#include <iostream>
#include <string>

class Solution {
public:
    int countSegments(std::string s) {
        int segments = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ' && (i == 0 || s[i-1] == ' ')) {
                ++segments;
            }
        }
        return segments;
    }
};
