#include <map>
#include <string>

using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
        map<char, int> m;

        if (s == goal) {
            for (char c : s) {
                m[c]++;
                if (m[c] > 1) return true;
            }
            return false;
        } 

        int diff = 0;
        char a, b;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                diff++;
                if (diff == 1) a = s[i], b = goal[i];
                else if (diff == 2) {
                    if (s[i] != b || goal[i] != a) return false;
                } else return false;
            }
        }
        return diff == 2;
    }
};
