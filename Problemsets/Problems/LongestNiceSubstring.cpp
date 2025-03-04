#include <string>

using namespace std;

class Solution {
public:
    bool checker(string s) {
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c<=90) c+=32;
            else c-=32;
            if (s.find(c)==string::npos) return false;
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        string res = ""; 
        for (int i = 0; i < s.size(); i++) {
            for (int j = i+1; j < s.size(); j++) {
                string subStr = s.substr(i, j-i+1);
                if (checker(subStr) && subStr.size()>res.size()) {
                    res = subStr;
                }
            }
        }
        return res;
    }
};
