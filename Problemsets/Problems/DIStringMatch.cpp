#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int lw = 0, mx = s.size();       
        vector<int> res(mx);
        for (int i = 0; i < s.size(); i++) {
            if (s[i]=='I') res[i] = lw++;
            else res[i] = mx--;
        }
        res.push_back(mx);
        return res;
    }
};
