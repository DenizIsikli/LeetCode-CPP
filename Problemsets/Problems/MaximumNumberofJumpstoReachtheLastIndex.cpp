#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dfs(int idx,vector<int>&nums,int target,vector<int>&dp){
        if(idx==nums.size()-1)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int ans=INT_MIN;
        for(int i=idx+1;i<nums.size();i++){
            if(abs(nums[i]-nums[idx])<=target){
                ans=max(ans,1+dfs(i,nums,target,dp));
            }
        }
        return dp[idx]=ans;
    }
    int maximumJumps(vector<int>& nums, int target) {
        vector<int>dp(nums.size(),-1);
        int ans=dfs(0,nums,target,dp);
        return ans>0?ans:-1;
    }
};
