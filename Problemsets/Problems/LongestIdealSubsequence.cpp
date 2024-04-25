#include <string>
#include <algorithm>

class Solution {
public:
    int longestIdealString(std::string s, int k) {
        int dp[150] = {};
        int res = 0;
        for (auto& i : s) {
            for (int j = i - k; j <= i + k; ++j) {
                dp[i] = std::max(dp[i], dp[j]);
            }
            res = std::max(res, ++dp[i]);
        }
        return res;
    }
};
