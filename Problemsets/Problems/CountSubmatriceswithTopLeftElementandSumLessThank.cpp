#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans=0;
        vector<vector<int>>px(grid.size()+1,vector<int>(grid[0].size()+1,0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                px[i+1][j+1]=grid[i][j]+px[i][j+1]+px[i+1][j]-px[i][j];
                if(px[i+1][j+1]<=k)ans++;
            }
        }
        return ans;
    }
};
