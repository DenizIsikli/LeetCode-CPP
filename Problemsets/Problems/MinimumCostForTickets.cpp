#include <vector>
#include <algorithm>

class Solution {
public:
    int mincostTickets(std::vector<int>& days, std::vector<int>& costs) {
        int n = days.size();
        int total_cost = 0;
        int pass7 = 0, pass30 = 0;

        std::vector<int> dp(n+1, 0);
        for (int i = 0; i < n; i++) {
            while (days[i]-days[pass7] >= 7) pass7++;
            while (days[i]-days[pass30] >= 30) pass30++;

            int cost1 = (i > 0 ? dp[i-1] : 0) + costs[0];
            int cost2 = (pass7 > 0 ? dp[pass7-1] : 0) + costs[1];
            int cost3 = (pass30 > 0 ? dp[pass30-1] : 0) + costs[2];

            dp[i] = std::min({cost1, cost2, cost3});
        }
        
        return dp[n-1];
    }
};
