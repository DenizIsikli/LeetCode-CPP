#include <string>

using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        string res = "";
        for (int i = 1; i < s.size(); i += 2) {
            char ch = s[i - 1];
            int digit = s[i] - '0';
            res += s[i - 1];
            res += ch + digit;
        }
        if (s.size() % 2 == 1) {
            res += s[s.size() - 1];
        }
        return res;
    }
};
