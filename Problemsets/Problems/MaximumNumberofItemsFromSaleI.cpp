#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        vector<int>cnt(n,0);
        for(int i=0;i<n;i++){
            int fct=items[i][0];
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(items[j][0]%fct==0)cnt[i]++;
            }
        }
        vector<int>dp(budget+1,0);
        for(int i=0;i<n;i++){
            int c=items[i][1];
            int v=1+cnt[i];
            for(int b=budget;b>=c;b--){
                dp[b]=max(dp[b],dp[b-c]+v);
            }
        }
        int mn=INT_MAX;
        for(auto&it:items)mn=min(mn,it[1]);
        int ans=0;
        for(int i=0;i<=budget;i++){
            ans=max(ans,dp[i]+(budget-i)/mn);
        }
        return ans;
    }
};
