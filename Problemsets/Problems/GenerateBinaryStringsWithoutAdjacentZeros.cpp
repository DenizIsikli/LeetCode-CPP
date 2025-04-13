#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> res;

    void backtrack(int n, string s) {
        if (n == 0) {
            res.push_back(s);
            return;
        }

        if (s[s.size()-1]!='0') {
            backtrack(n-1, s + "0");
        }
        backtrack(n-1, s + "1");
    }

    vector<string> validStrings(int n) {
        backtrack(n-1, "1");    
        backtrack(n-1, "0");
        return res;
    }
};
