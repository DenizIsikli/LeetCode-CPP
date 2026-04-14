#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        const long long INF=1e18;
        vector<vector<long long>>dp(robot.size()+1,vector<long long>(factory.size()+1,INF));
        for(int j=0;j<=factory.size();j++)dp[0][j]=0;
        for(int j=1;j<=factory.size();j++){
            int pos=factory[j-1][0];
            int lim=factory[j-1][1];
            for(int i=0;i<=robot.size();i++){
                dp[i][j]=dp[i][j-1];
                long long dist=0;
                for(int k=1;k<=lim&&i-k>=0;k++){
                    dist+=abs(robot[i-k]-pos);
                    dp[i][j]=min(dp[i][j],dp[i-k][j-1]+dist);
                }
            }
        }
        return dp[robot.size()][factory.size()];
    }
};

// Memoization approach (TLE)
class SolutionMemoization {
public:
    long long solve(int idx,vector<int>&robot,vector<vector<int>>&factory){
        if(idx==robot.size())return 0;
        long long ans=1e18;
        for(int j=0;j<factory.size();j++){
            if(factory[j][1]>0){
                factory[j][1]--;
                ans=min(ans,abs(robot[idx]-factory[j][0])+solve(idx+1,robot,factory));
                factory[j][1]++;
            }
        }
        return ans;
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        return solve(0,robot,factory);
    }
};

