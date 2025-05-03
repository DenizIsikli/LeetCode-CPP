#include <vector>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rM(n);
        vector<int> cM(n);
        for (int i = 0; i < n; i++) {
            int mr = INT_MIN;
            int mc = INT_MIN;
            for (int j = 0; j < n; j++) {
                mr = max(mr, grid[i][j]);
                mc = max(mc, grid[j][i]);
            }
            rM[i]=mr;
            cM[i]=mc;
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res += (min(rM[i], cM[j])-grid[i][j]);
            }
        }
        return res;
    }
};
