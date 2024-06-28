#include <vector>
#include <algorithm>

class Solution {
public:
    long long maximumImportance(int n, std::vector<std::vector<int>>& roads) {
        std::vector<int> degree(n,0);
        long ans = 0, cost = 1;
        for (auto road : roads) {
            degree[road[0]]++;
            degree[road[1]]++;
        }
        std::sort(degree.begin(), degree.end());
        for (auto deg : degree) ans += deg*(cost++);
        return ans;
    }
};
