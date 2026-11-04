#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dfs(int i,int m,vector<int>&suf,vector<vector<int>>&dp,int n){
        if(i==n)return 0;
        if(dp[i][m]!=-1)return dp[i][m];
        int best=0;
        for(int x=1;x<=2*m&&i+x<=n;x++){
            int newM=max(m,x);
            int cur=suf[i]-dfs(i+x,newM,suf,dp,n);
            best=max(best,cur);
        }
        return dp[i][m]=best;
    }
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        vector<int>suf(n+1,0);
        for(int i=n-1;i>=0;i--)suf[i]=suf[i+1]+piles[i];
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return dfs(0,1,suf,dp,n);
    }
};
