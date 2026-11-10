#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        vector<int>dp(n+1,0);
        dp[1]=1,dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

// DP Memoization
// class Solution {
// public:
//     int dfs(int n,vector<int>&dp){
//         if(n<=2)return n;
//         if(dp[n]!=-1)return dp[n];
//         dp[n]=dfs(n-1,dp)+dfs(n-2,dp);
//         return dp[n];
//     }
//     int climbStairs(int n) {
//         if(n<=2)return n;
//         vector<int>dp(n+1,-1);
//         return dfs(n,dp);
//     }
// };
