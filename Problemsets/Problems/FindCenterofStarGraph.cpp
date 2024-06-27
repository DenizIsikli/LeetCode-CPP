#include <vector>

class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges) {
        std::vector<int> degree(10e5+1, 0);
        for (auto &edge : edges) {
            degree[edge[0]]++;
            degree[edge[1]]++;
        }

        for (int i = 1; i <= 10e5; i++) {
            if (degree[i] == edges.size()) {
                return i;
            }
        }
        return -1;
    }
};
