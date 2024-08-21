#include <vector>
#include <algorithm>

class Solution {
public:
    int minProcessingTime(std::vector<int>& processorTime, std::vector<int>& tasks) {
        std::sort(tasks.begin(), tasks.end());
        std::sort(processorTime.rbegin(), processorTime.rend());

        int maxTime = 0;
        int idx = 0;
        int proces = 0;
        while (idx < tasks.size()) {
            int temp = tasks.size()/processorTime.size();
            while (temp--) {
                maxTime = std::max(maxTime, (processorTime[proces]+tasks[idx++]));
            }
            ++proces;
        }
        return maxTime;
    }
};
