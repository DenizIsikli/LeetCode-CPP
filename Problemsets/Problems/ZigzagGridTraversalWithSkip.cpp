#include <vector>

using namespace std;

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> res;

        for (int i = 0; i < grid.size(); i++) {
            if (i%2==0) {
                for (int j = 0; j < grid[0].size(); j++) {
                    if (j%2==0) res.push_back(grid[i][j]);
                }
            } else {
                for (int j = grid[0].size()-1; j >= 0; j--) {
                    if (j%2==1) res.push_back(grid[i][j]);
                }
            }
        }
        return res;
    }
};
