#include <vector>
using namespace std;

class Solution {
public:
    int dfs(vector<vector<int>> &grid, int x, int y, int end_x, int end_y) {
        if (x<0||x>=grid.size()||y<0||y>=grid[0].size()||grid[x][y]==-1) return 0;

        if (x==end_x&&y==end_y) {
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[0].size(); j++) {
                    if (grid[i][j]==0) {
                        return 0;
                    }
                }
            }
            return 1;
        }

        int count = 0;
        grid[x][y]=-1;
        count+=dfs(grid, x+1, y, end_x, end_y);
        count+=dfs(grid, x-1, y, end_x, end_y);
        count+=dfs(grid, x, y+1, end_x, end_y);
        count+=dfs(grid, x, y-1, end_x, end_y);
        grid[x][y]=0;
        return count;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int start_x, start_y, end_x, end_y;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j]==1) start_x=i, start_y=j;
                if (grid[i][j]==2) end_x=i, end_y=j;
            }
        } 
        return dfs(grid, start_x, start_y, end_x, end_y);
    }
};
