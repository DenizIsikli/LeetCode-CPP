#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int findMinDifference(std::vector<std::string>& timePoints) {
        std::vector<int> minutes;
        for (auto time : timePoints) {
            int hour = std::stoi(time.substr(0, 2));
            int minute = std::stoi(time.substr(3, 2));
            minutes.push_back(hour * 60 + minute);
        }
        std::sort(minutes.begin(), minutes.end());
        int minDiff = INT_MAX;
        for (int i = 0; i < minutes.size(); i++) {
            for (int j = i+1; j < minutes.size(); j++) {
                minDiff = std::min(minDiff, std::min(minutes[j] - minutes[i], 1440 - minutes[j] + minutes[i]));
            }
        }
        return minDiff;
    }
};
