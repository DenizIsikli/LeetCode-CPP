#include <string>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res = "";
        int cnt = 0;

        for (int i  = s.size()-1; i >= 0; i--) {
            if (s[i] != '-') {
                if (cnt == k) {
                    res += '-';
                    cnt = 0;
                }
                res += toupper(s[i]);
                cnt++;
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
