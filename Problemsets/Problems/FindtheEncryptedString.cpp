#include <string>

class Solution {
public:
    std::string getEncryptedString(std::string s, int k) {
        std::string res;
        for (int i = 0; i < s.size(); i++) {
            res += s[(i+k)%s.size()];
        }
        return res;
    }
};
