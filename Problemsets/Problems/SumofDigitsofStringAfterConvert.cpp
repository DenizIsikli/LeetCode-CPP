#include <cwchar>
#include <string>

class Solution {
public:
    int getLucky(std::string s, int k) {
        std::string str = "";
        for (char c : s) {
            str += std::to_string(c-'a'+1);
        }

        while (k > 0) {
            int newNum = 0;
            for (char c : str) {
                newNum += c-'0';
            }
            str = std::to_string(newNum);
            k--;
        }
        return std::stoi(str);
    }
};
