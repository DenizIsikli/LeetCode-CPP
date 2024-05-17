#include <vector>

class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        std::vector<int> path(amount + 1, 0);
        path[0] = 1;

        for (int coin : coins) {
            for (int i = coin; i < amount+1; ++i) {
                path[i] += path[i - coin];
            }
        }
        return path[amount];
    }
};
