#include <string>

using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i <= n/2; i++) {
            char l = s[i];
            char r = s[n-i-1];
            if (l!=r) {
                char mn = min(l, r);
                if (mn==r) s[i]=r;
                else s[n-i-1]=l;
            }
        }
        return s;
    }
};
