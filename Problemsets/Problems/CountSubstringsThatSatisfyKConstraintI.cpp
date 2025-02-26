#include <string>

using namespace std;

class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res = 0;
        int l=0, r=0;
        int ones=0, zeros=0;
        while (r<s.size()) {
            if (s[r]=='1') ones++;
            else zeros++;

            while (ones>k&&zeros>k) {
                if (s[l]=='1') ones--;
                else zeros--;
                l++;
            }

            res+=(r-l+1);
            r++;
        }
        return res;
    }
};
