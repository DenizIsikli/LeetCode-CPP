#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(),0);
        int a=0,b=INT_MAX/2,c=INT_MAX/2;
        for(int i=1;i<=n;i++){
            int cur=costs[i]+min({a+1,b+4,c+9});
            c=b,b=a,a=cur;
        }
        return a;
    }
};

// Precompute version:
// class Solution {
// public:
//     int climbStairs(int n,vector<int>&costs){
//         costs.insert(costs.begin(),0);
//         vector<int>dp(n+1);
//         dp[0]=0;
//         if(n==0)return dp[0];
//         dp[1]=costs[1]+dp[0]+1;
//         if(n==1)return dp[1];
//         dp[2]=costs[2]+min(dp[1]+1,dp[0]+4);
//         if(n==2)return dp[2];
//         dp[3]=costs[3]+min({dp[2]+1,dp[1]+4,dp[0]+9});
//         for(int i=4;i<=n;++i){
//             dp[i]=costs[i]+min({dp[i-1]+1,dp[i-2]+4,dp[i-3]+9});
//         }
//         return dp[n];
//     }
// };
