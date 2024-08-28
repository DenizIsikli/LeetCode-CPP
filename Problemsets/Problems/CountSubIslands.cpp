#include <vector>

class Solution {
public:
    bool dfs(std::vector<std::vector<int>>& grid1, std::vector<std::vector<int>>& grid2, int i, int j) {
        if (i < 0 || i >= grid2.size() || j < 0 || j >= grid2[0].size() || grid2[i][j] == 0) {
            return true;
        }
        if (grid1[i][j] == 0) {
            return false;
        }
        grid2[i][j] = 0;
        bool up = dfs(grid1, grid2, i - 1, j);
        bool down = dfs(grid1, grid2, i + 1, j);
        bool left = dfs(grid1, grid2, i, j - 1);
        bool right = dfs(grid1, grid2, i, j + 1);
        return up && down && left && right;
    }

    int countSubIslands(std::vector<std::vector<int>>& grid1, std::vector<std::vector<int>>& grid2) {
        int count = 0;
        for (int i = 0; i < grid2.size(); i++) {
            for (int j = 0; j < grid2[0].size(); j++) {
                if (grid2[i][j] == 1) {
                    if (dfs(grid1, grid2, i, j)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
