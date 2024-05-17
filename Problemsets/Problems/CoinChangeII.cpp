class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        std::vector<int> path(amount + 1, 0);
        path[0] = 1;
        for (int i = 0; i < coins.size(); i++) {
            for (int j = coins[i]; j <= amount; j++) {
                path[j] += path[j - coins[i]];
            }
        }
        return path[amount];
    }
};
