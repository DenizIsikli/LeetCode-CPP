#include <string>

using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1 = 0;
        for (auto &c : s) {
            if (c=='1') cnt1++;
        }
        string res = "";
        if (cnt1==1) {
            for (int i = 0; i < s.size()-1; i++) {
                res += '0';
            }
            res += '1';
            return res;
        } else {
            for (int i = 0; i < cnt1-1; i++) {
                res += '1';
            }
            for (int i = 0; i < s.size()-cnt1; i++) {
                res += '0';
            }
            res += '1';
            return res;
        }
    }
};
