#include <vector>
#include <climits>

class Solution {
public:
    int minimumArea(std::vector<std::vector<int>>& grid) {
        int minrow = INT_MAX, maxrow = INT_MIN, mincol = INT_MAX, maxcol = INT_MIN;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j]==1) {
                    minrow = std::min(minrow, i);
                    maxrow = std::max(maxrow, i);
                    mincol = std::min(mincol, j);
                    maxcol = std::max(maxcol, j);
                }
            }
        }
        return (maxrow-minrow+1)*(maxcol-mincol+1);
    }
};
