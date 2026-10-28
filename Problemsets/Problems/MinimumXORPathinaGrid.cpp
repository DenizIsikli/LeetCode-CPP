#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<bitset<1024>>>dp(grid.size(),vector<bitset<1024>>(grid[0].size()));
        dp[0][0].set(grid[0][0]);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(i>0){
                    for(int x=0;x<1024;x++){
                        if(dp[i-1][j][x])dp[i][j].set(x^grid[i][j]);
                    }
                }
                if(j>0){
                    for(int x=0;x<1024;x++){
                        if(dp[i][j-1][x])dp[i][j].set(x^grid[i][j]);
                    }
                }
            }
        }
        for(int x=0;x<1024;x++){
            if(dp[grid.size()-1][grid[0].size()-1][x])return x;
        }
        return 0;
    }
};
