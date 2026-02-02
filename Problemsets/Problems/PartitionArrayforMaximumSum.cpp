#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size()+1,0);
        for(int i=1;i<=arr.size();i++){
            int mx=0,mxsm=0;
            for(int j=1;j<=k&&i-j>=0;j++){
                mx=max(mx,arr[i-j]);
                mxsm=max(mxsm,dp[i-j]+mx*j);
            }
            dp[i]=mxsm;
        }
        return dp[arr.size()];
    }
};
