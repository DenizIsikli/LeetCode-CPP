#include <vector>

class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        int ans = 0;
        for (int i = 0; i < worker.size(); ++i) {
            int max = 0;
            for (int j = 0; j < difficulty.size(); ++j) {
                if (worker[i] >= difficulty[j]) {
                    max = std::max(max, profit[j]);
                }
            }
            ans += max;
        }
        return ans;
    }
};
