#include <queue>
#include <vector>

class Solution {
public:
    std::vector<int> getFinalState(std::vector<int>& nums, int k, int multiplier) {
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }

        while (k--) {
            auto it = pq.top();
            pq.pop();
            nums[it.second] *= multiplier;
            pq.push({multiplier*it.first, it.second});
        } 
        return nums;
    }
};
