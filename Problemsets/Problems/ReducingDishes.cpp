#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        int maxSatisfaction = 0;
        int currentSum = 0;

        for (int i = n - 1; i >= 0; --i) {
            currentSum += satisfaction[i];
            if (currentSum <= 0) break;
            maxSatisfaction += currentSum;
        }

        return maxSatisfaction;
    }
};
