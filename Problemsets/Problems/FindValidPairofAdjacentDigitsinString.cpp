#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char, int> fq;
        for (char c : s) {
            fq[c]++;
        }

        string res = "";
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1] && fq[s[i]] == s[i]-'0' && fq[s[i-1]] == s[i-1]-'0') {
                res.push_back(s[i-1]);
                res.push_back(s[i]);
                break;
            }
        }
        return res;
    }
};
