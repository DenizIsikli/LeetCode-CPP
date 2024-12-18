#include <vector>

class Solution {
public:
    std::vector<int> finalPrices(std::vector<int>& prices) {
        std::vector<int> res;
        for (int i = 0; i < prices.size(); i++) {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            res.push_back(prices[i] - discount);
        }
        return res;
    }
};
