#include <string>
#include <algorithm>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        std::sort(s1.begin(), s1.end());
        bool res = false;
        for (int i = 0; i < s2.size()-s1.size()+1; i++) {
            std::string temp = s2.substr(i, s1.size());
            std::sort(temp.begin(), temp.end());
            if (temp == s1) { 
                res = true; 
                break;
            }
        }
        return res;
    }
};
