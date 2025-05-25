#include <string>

using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int res = 0;
        for (char &c : s) { c = tolower(c); }
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1]) { res++; }
        }
        return res;
    }
};
