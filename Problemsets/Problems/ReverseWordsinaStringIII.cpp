#include <string>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string res = "";

        int idx = 0;
        while (idx<s.size()) {
            std::string word = "";
            while(idx<s.size() && s[idx] != ' ') {
                word += s[idx];
                idx++;
            }
            std::reverse(word.begin(), word.end());
            res += word;
            if (idx < s.size()) {
                res += " ";
            }
            idx++;
        }
        return res;
    }
};
