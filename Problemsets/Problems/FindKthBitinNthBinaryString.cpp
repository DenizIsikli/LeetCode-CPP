#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    char findKthBit(int n, int k) {
        auto reverseInvert = [](std::string s){
            for(auto &c: s){
                c = (c == '0') ? '1' : '0';
            }
            std::reverse(s.begin(), s.end());
            return s;
        };

        std::vector<std::string> dp(n+1);
        dp[1] = "0";
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + "1" + reverseInvert(dp[i-1]);
        }
        return dp[n][k-1];
    }
};
