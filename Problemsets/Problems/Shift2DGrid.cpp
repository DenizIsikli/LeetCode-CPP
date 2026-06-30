#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>res(grid.size(),vector<int>(grid[0].size()));
        int n= grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int newPos=(i*m+j+k)%(n*m);
                res[newPos/m][newPos%m]=grid[i][j];
            }
        }
        return res;
    }
};
