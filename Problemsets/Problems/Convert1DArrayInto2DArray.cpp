#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> construct2DArray(std::vector<int>& original, int m, int n) {
        std::vector<std::vector<int>> res(m, std::vector<int>(n));
        if (m * n != original.size()) {
            return {};
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = original[i * n + j];
            }
        }
        return res;
    }
};
