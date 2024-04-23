#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> dp[n + 1];

        dp[0].push_back("");
        dp[1].push_back("()");

        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                for (std::string &first : dp[j]) {
                    for (std::string &second : dp[i - j - 1]) {
                        dp[i].push_back("(" + first + ")" + second);
                    }
                }
            }
        }
        return dp[n];
    }
};
