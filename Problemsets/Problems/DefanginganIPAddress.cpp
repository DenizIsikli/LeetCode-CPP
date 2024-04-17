#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string ans = "";
        for (char c : address) {
            if (c == '.') ans += "[.]";
            else ans += c;
        }
        return ans;
    }
};
