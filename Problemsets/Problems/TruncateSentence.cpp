#include <string>

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                k--;
                if (k!=0) res+=s[i];
                else break;
            } else {
                res+=s[i];
            }
        }
        return res;
    }
};
