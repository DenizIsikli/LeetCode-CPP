#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    using ll=long long;
    int maxProductPath(vector<vector<int>>& grid){
        int r=grid.size(),c=grid[0].size();
        const ll MOD=1e9+7;
        vector<vector<array<ll,2>>>dp(r,vector<array<ll,2>>(c));
        dp[0][0]={grid[0][0],grid[0][0]};
        for(int j=1;j<c;j++){
            ll x=grid[0][j];
            dp[0][j]={dp[0][j-1][0]*x,dp[0][j-1][1]*x};
        }
        for(int i=1;i<r;i++){
            ll x=grid[i][0];
            dp[i][0]={dp[i-1][0][0]*x,dp[i-1][0][1]*x};
            for(int j=1;j<c;j++){
                ll x=grid[i][j];
                auto [mn,mx]=minmax({dp[i-1][j][0]*x,dp[i-1][j][1]*x,dp[i][j-1][0]*x,dp[i][j-1][1]*x});
                dp[i][j]={mn,mx};
            }
        }
        ll ans=dp[r-1][c-1][1];
        return ans<0?-1:ans%MOD;
    }
};
