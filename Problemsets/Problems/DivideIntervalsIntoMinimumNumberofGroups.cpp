#include <queue>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minGroups(std::vector<std::vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for (const auto& interval : intervals) {
            int start = interval[0], end = interval[1];
            if (!pq.empty() && pq.top() < start) {
                pq.pop();
            }
            pq.push(end);
        }
        return pq.size();
    }
};
