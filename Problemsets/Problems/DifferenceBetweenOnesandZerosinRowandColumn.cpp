#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> res(grid.size(),vector<int>(grid[0].size(),0));
        int n=grid.size();
        int m=grid[0].size();
        vector<int> row(n,0),col(m,0);
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j]==1) {
                    row[i]+=1;
                }
            }
        }
        for (int j=0; j<m; j++) {
            for (int i=0; i<n; i++) {
                if (grid[i][j]==1) {
                    col[j]+=1;
                }
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                res[i][j]=row[i]+col[j]-(n-row[i])-(m-col[j]);
            }
        }
        return res;
    }
};
