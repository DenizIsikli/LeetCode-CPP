#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int ans=0;
        vector<vector<int>>pxX(grid.size()+1,vector<int>(grid[0].size()+1,0));
        vector<vector<int>>pxY(grid.size()+1,vector<int>(grid[0].size()+1,0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                pxX[i+1][j+1]=pxX[i][j+1]+pxX[i+1][j]-pxX[i][j]+(grid[i][j]=='X');
                pxY[i+1][j+1]=pxY[i][j+1]+pxY[i+1][j]-pxY[i][j]+(grid[i][j]=='Y');
                if(pxX[i+1][j+1]>0&&pxX[i+1][j+1]==pxY[i+1][j+1])ans++;
            }
        }
        return ans;
    }
};
