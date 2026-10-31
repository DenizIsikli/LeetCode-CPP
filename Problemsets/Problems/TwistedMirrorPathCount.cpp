#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n,m;
    long long mod=1e9+7;
    vector<vector<int>>nums;
    vector<vector<vector<long long>>>dp;
    long long dfs(int i,int j,int dir){
        if(i>=n||j>=m)return 0;
        if(i==n-1&&j==m-1)return 1;
        if(dp[i][j][dir]!=-1)return dp[i][j][dir];
        if(nums[i][j]==1){
            if(dir==0)dp[i][j][dir]=dfs(i+1,j,1);
            else dp[i][j][dir]=dfs(i,j+1,0);
        }else{
            dp[i][j][dir]=(dfs(i,j+1,0)+dfs(i+1,j,1))%mod;
        }
        return dp[i][j][dir];
    }
    int uniquePaths(vector<vector<int>>& grid) {
        nums=grid;
        n=grid.size(),m=grid[0].size();
        dp.assign(n,vector<vector<long long>>(m,{-1,-1}));
        return dfs(0,0,0);
    }
};
