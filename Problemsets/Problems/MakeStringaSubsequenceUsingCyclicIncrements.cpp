#include <string>

class Solution {
public:
    bool canMakeSubsequence(std::string str1, std::string str2) {
        int str2Idx = 0;
        for (char currChar : str1) {
            if (str2Idx < str2.size() && (str2[str2Idx]-currChar+26)%26<=1) {
                str2Idx++;
            }
        }
        return str2Idx == str2.size();
    }
};
