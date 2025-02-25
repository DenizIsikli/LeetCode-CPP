#include <string>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]=='(') cnt++;
            else if (s[i]==')') {
                res=max(res, cnt);
                cnt--;
            }
        }
        return res;
    }
};
