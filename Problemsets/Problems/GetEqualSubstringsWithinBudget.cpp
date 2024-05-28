#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int equalSubstring(std::string s, std::string t, int maxCost) {
        std::vector<int> cost(s.size(), 0);
        for (int i = 0; i < s.size(); ++i) {
            cost[i] = std::abs(s[i] - t[i]);
        }

        int start = 0, end = 0, sum = 0, maxLen = 0;
        while (end < s.size()) {
            sum += cost[end];
            while (sum>maxCost) {
                sum -= cost[start];
                ++start;
            }
            maxLen = std::max(maxLen, end - start + 1);
            ++end;
        }
        return maxLen;
    }
};
