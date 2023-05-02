#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> idx;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]==c) idx.push_back(i);
        }

        vector<int> res(s.size());
        for (int i = 0; i < s.size(); i++) {
            int minDist = INT_MAX;
            for (auto &x : idx) {
                minDist = min(minDist, abs(i-x));
            }
            res[i]=minDist;
        }
        return res;
    }
};
