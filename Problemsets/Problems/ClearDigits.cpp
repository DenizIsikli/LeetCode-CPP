#include <string>

class Solution {
public:
    std::string clearDigits(std::string s) {
        int l = s.size();
        for (int i = 0; i < l; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                if (i!=0) {
                    s.erase(i-1,2);
                    l-=2;
                    i-=2;
                } else {
                    s.erase(i,2);
                    l--;
                    i--;
                }
            }
        }
        return s;
    }
};
