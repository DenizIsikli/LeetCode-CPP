#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int maxProfit = 0;
        int lowidx = prices[0];

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < lowidx) {
                lowidx = prices[i];
            } else {
                maxProfit = std::max(maxProfit, prices[i] - lowidx);
            }
        }
        return maxProfit;
    }
};
