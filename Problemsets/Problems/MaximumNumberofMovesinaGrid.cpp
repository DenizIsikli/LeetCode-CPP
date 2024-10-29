#include <vector>
#include <algorithm>

class Solution {
public:
    int dfs(int i, int j, int prev, std::vector<std::vector<int>> &grid, std::vector<std::vector<int>> &dp) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || i >= n || j < 0 || j >= m) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int val = grid[i][j];
        if (val <= prev) {
            return 0;
        }

        return dp[i][j] = 1+std::max({dfs(i-1,j+1,val,grid,dp),
                                      dfs(i,j+1,val,grid,dp),
                                      dfs(i+1,j+1,val,grid,dp)});
    }

    int maxMoves(std::vector<std::vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        std::vector<std::vector<int>> dp(n, std::vector<int>(m, -1));
        int res = 0;
        for (int i = 0; i < n; i++) {
            res = std::max(res, dfs(i,0,-1,grid,dp));
        }
        return res-1;
    }
};
