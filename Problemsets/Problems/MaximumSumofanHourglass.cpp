#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans=INT_MIN;
        if(grid.size()<3||grid[0].size()<3)return 0;
        for(int i=0;i<grid.size()-2;i++){
            int tmp=0;
            for(int j=0;j<grid[0].size()-2;j++){
                tmp=grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                ans=max(ans,tmp);
            }
        }
        return ans;
    }
};
