#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

class Solution {
private:
    std::unordered_map<std::string, int> vis;

    int solve(std::string &s, int idx) {
        if (idx >= s.size()) return 0;

        int ext = INT_MAX;
        std::string tmp = "";

        for (int i = idx; i < s.size(); i++) {
            tmp += s[i];

            if (vis.find(tmp) != vis.end()) {
                ext = std::min(ext, solve(s, i+1));
            }
        }

        ext = std::min(ext, 1+solve(s, idx+1));
        return ext;
    }

public:
    int minExtraChar(std::string s, std::vector<std::string>& dictionary) {
        for (auto &val : dictionary) {
            vis[val]++;
        }
        return solve(s, 0);
    }
};