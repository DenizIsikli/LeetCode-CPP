#include <vector>
#include <queue>

class Solution {
public:
    std::vector<int> kthSmallestPrimeFraction(std::vector<int>& arr, int k) {
        std::priority_queue<std::pair<double, std::pair<int, int>>, std::vector<std::pair<double, std::pair<int, int>>>, std::greater<std::pair<double, std::pair<int, int>>>> pq;
        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i + 1; j < arr.size(); ++j) {
                pq.push({(double)arr[i] / arr[j], {arr[i], arr[j]}});
            }
        }
        while (--k) {
            pq.pop();
        }
        return {pq.top().second.first, pq.top().second.second};
    }
};
