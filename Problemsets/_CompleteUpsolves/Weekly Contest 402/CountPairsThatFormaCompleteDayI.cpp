#include <vector>

class Solution {
public:
    int countCompleteDayPairs(std::vector<int>& hours) {
        int cnt = 0;
        for (int i = 0; i < hours.size(); ++i) {
            for (int j = i+1; j < hours.size(); ++j) {
                long long s = hours[i] + hours[j];
                if (s%24==0) ++cnt;
            }
        }
        return cnt;
    }
};
