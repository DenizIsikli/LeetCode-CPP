#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[1001][11];
    int solve(int idx,int prev,int rows,int cols,vector<vector<int>>&cnt){
        if(idx>=cols)return 0;
        if(dp[idx][prev]!=-1)return dp[idx][prev];
        int ans=INT_MAX;
        for(int i=0;i<=9;i++){
            if(i!=prev){
                ans=min(ans,rows-cnt[idx][i]+solve(idx+1,i,rows,cols,cnt));
            }
        }
        return dp[idx][prev]=ans;
    }
    int minimumOperations(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>cnt(m,vector<int>(10,0));
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                cnt[j][grid[i][j]]++;
            }
        }
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,10,n,m,cnt);
        return ans;
    }
};
