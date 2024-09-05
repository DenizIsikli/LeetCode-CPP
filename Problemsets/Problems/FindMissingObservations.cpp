#include <vector>
#include <numeric>

class Solution {
public:
    std::vector<int> missingRolls(std::vector<int>& rolls, int mean, int n) {
        int total_size = rolls.size()+n;
        int goal_num = total_size*mean;
        int sum_rolls = std::accumulate(rolls.begin(), rolls.end(), 0);

        int remaining_sum = goal_num - sum_rolls;
        if(remaining_sum < n || remaining_sum > 6*n) return {};

        std::vector<int> res(n, remaining_sum/n);
        remaining_sum %= n;
        for(int i = 0; i < remaining_sum; i++) res[i]++;
        
        return res;
    }
};
