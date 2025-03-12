#include <string>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0, cntr=0, cntl=0;
        for (auto &c : s) {
            if (c=='R') cntr++;
            else cntl++;
            if (cntr==cntl) res++;
        }
        return res;
    }
};
