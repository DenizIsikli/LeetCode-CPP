#include <vector>
#include <algorithm>

int dfs(std::vector<std::vector<int>> &grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) return 0;

    int current = grid[i][j];
    grid[i][j] = 0;
    int localMaxGold = current;

    localMaxGold = std::max({
        dfs(grid, i + 1, j),
        dfs(grid, i - 1, j),
        dfs(grid, i, j - 1),
        dfs(grid, i, j + 1)
    }) + current;

    grid[i][j] = current;
    return localMaxGold;
}

class Solution {
public:
    int getMaximumGold(std::vector<std::vector<int>>& grid) {
        int maxGold = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] != 0) {
                    maxGold = std::max(maxGold, dfs(grid, i, j));
                }
            }
        }
        return maxGold;
    }
};
