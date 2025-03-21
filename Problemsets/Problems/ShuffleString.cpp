#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<string> res(s.size());
        for (int i = 0; i < s.size(); i++) {
            res[indices[i]] = s[i];
        }
        string ans;
        for (auto &c : res) {
            ans += c;
        }
        return ans;
    }
};
