#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char start = s[0];
        int diff = abs((s[1]-'0') - (s[4]-'0'));
        for (char c = start; c <= s[3]; c++) {
            for (int i = s[1]-'0'; i <= s[4]-'0'; i++) {
                res.push_back(string(1, c) + to_string(i));
            }
        }
        return res;
    }
};
