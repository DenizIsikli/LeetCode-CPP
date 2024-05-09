#include <vector>
#include <algorithm>

class Solution {
public:
    long long maximumHappinessSum(std::vector<int>& happiness, int k) {
        int subtract_counter = 0;
        long long sum = 0;
        std::sort(happiness.begin(), happiness.end(), std::greater<int>());
        for (int i = 0; i < k; ++i) {
            sum += std::max(happiness[i]-subtract_counter, 0);
            subtract_counter++;
        }
        return sum;
    }
};
