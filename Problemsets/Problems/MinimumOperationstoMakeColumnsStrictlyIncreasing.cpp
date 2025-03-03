#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int res = 0;       
        for (int j = 0; j < grid[0].size(); j++) {
            for (int i = 1; i < grid.size(); i++) {
                if (grid[i][j]<=grid[i-1][j]) {
                    int add = abs(grid[i-1][j]-grid[i][j])+1;
                    grid[i][j]+=add;
                    res+=add;
                }
            }
        }
        return res;
    }
};
