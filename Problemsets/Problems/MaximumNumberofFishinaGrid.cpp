#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] > 0) {
                    int cnt = 0;
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while (!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();
                        if (grid[x][y] > 0) {
                            cnt += grid[x][y];
                            grid[x][y] = 0;
                            if (x > 0 && grid[x-1][y] > 0) q.push({x-1, y});
                            if (x+1 < grid.size() && grid[x+1][y] > 0) q.push({x+1, y});
                            if (y > 0 && grid[x][y-1] > 0) q.push({x, y-1});
                            if (y+1 < grid[0].size() && grid[x][y+1] > 0) q.push({x, y+1});
                        }
                    }
                    res = max(res, cnt);
                }
            }
        } 
        return res;
    }
};
