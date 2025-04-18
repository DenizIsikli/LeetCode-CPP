#include <string>

using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int res=0, cnt=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]=='*' && cnt%2==0) res++; 
            if (s[i]=='|') cnt++;
        }
        return res;
    }
};
