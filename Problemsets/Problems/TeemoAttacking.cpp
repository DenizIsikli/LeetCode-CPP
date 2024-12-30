#include <vector>

class Solution {
public:
    int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
        int res = 0;
        for (int i = 0; i < timeSeries.size(); i++) {
            if (i<timeSeries.size()-1 && timeSeries[i]+duration>timeSeries[i+1]) {
                res += timeSeries[i+1]-timeSeries[i]; 
            } else {
                res += duration;
            }
        }
        return res; 
    }
};
