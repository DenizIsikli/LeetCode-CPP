#include <vector>
#include <algorithm>

class Solution {
public:
    int largestCombination(std::vector<int>& candidates) {
        int n = candidates.size();
        int res = 0;
        for (int i = 0; i < 32; i++) {
            int cnt = 0;
            for (auto candidate : candidates) {
                if (candidate & (1<<i)) cnt++;
            }
            res = std::max(res, cnt);
        }
        return res;
    }
};
