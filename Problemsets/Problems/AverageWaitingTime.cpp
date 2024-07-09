#include <vector>
#include <algorithm>

class Solution {
public:
    double averageWaitingTime(std::vector<std::vector<int>>& customers) {
        double ans = 0.0;
        int total_time = 0;
        for (int i = 0; i < customers.size(); ++i) {
            int arrival = customers[i][0];
            int time = customers[i][1];
            if (i==0) {
                total_time = arrival+time;
                ans += total_time-arrival;
            } else {
                int a = std::max(total_time, arrival);
                total_time = a+time;
                ans += total_time-arrival;
            }
        }
        return ans/customers.size();
    }
};
