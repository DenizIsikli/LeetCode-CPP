#include <string>

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        s += s;
        return s.find(goal) != std::string::npos;
    }
};
