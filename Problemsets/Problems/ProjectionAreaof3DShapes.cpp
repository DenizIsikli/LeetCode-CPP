#include <vector>

using namespace std;

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int rwMx=0,clMx=0;
            for(int j=0;j<n;j++){
                if(grid[i][j])ans++;
                rwMx=max(rwMx,grid[i][j]);
                clMx=max(clMx,grid[j][i]);
            }
            ans+=rwMx+clMx;
        }
        return ans;
    }
};
