#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> largestLocal(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        std::vector<std::vector<int>> res(n-2, std::vector<int>(n-2));

        for (int i = 1; i < n-1; ++i) {
            for (int j = 1; j < m-1; ++j) {
                int local_val = 0;
                for (int k = i-1; k <= i+1; ++k) {
                    for (int l = j-1; l <= j+1; ++l) {
                        local_val = std::max(local_val, grid[k][l]);
                    }
                }
                res[i-1][j-1] = local_val;
            }
        }
        return res;
    }
};
