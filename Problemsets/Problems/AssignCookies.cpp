#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        int cnt = 0;
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        for (int i = 0, j = 0; i < g.size() && j < s.size(); ++j) {
            if (s[i] >= g[j]) {
                ++cnt;
                ++i;
            }
        }
        return cnt;
    }
};
