#include <map>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int maxDifference(string s) {
        map<char, int> fq;
        for (auto &c : s) {
            fq[c]++;
        }
        int mx = INT_MIN, mn = INT_MAX;
        for (auto &[k, v] : fq) {
            if (v % 2 == 0) {
                mn = min(mn, v);
            } else {
                mx = max(mx, v);
            }
        }

        if (mx == INT_MIN || mn == INT_MAX) {
            return -1;
        }

        return mx - mn;
    }
};
