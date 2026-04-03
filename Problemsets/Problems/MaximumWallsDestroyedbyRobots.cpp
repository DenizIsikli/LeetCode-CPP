#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
        int n=robots.size();
        vector<pair<int,int>>r;
        for(int i=0;i<n;i++)r.push_back({robots[i],distance[i]});
        sort(r.begin(),r.end());
        sort(walls.begin(),walls.end());
        auto countWalls=[&](long long x1, long long x2){
            if(x1>x2)return 0;
            auto it1=lower_bound(walls.begin(),walls.end(),x1);
            auto it2=upper_bound(walls.begin(),walls.end(),x2);
            return (int)(it2-it1);
        };
        vector<vector<int>>dp(n,vector<int>(2,0));
        dp[0][0]=countWalls((long long)r[0].first-r[0].second,r[0].first);
        int limit0=(n>1)?r[1].first-1:2e9;
        dp[0][1]=countWalls((long long)r[0].first,min((long long)r[0].first+r[0].second,(long long)limit0));
        for(int i=1;i<n;i++){
            long long curr_p=r[i].first;
            long long curr_d=r[i].second;
            long long prev_p=r[i-1].first;
            long long prev_d=r[i-1].second;
            long long leftReach=max(prev_p+1,curr_p-curr_d);
            int wallsLeft=countWalls(leftReach,curr_p);
            int bothLeft=dp[i-1][0]+wallsLeft;
            long long prevRightReach=min(curr_p-1,prev_p+prev_d);
            int overlap=countWalls(leftReach,prevRightReach);
            int leftRightOverlap=dp[i-1][1]+(wallsLeft-overlap);
            dp[i][0]=max(bothLeft,leftRightOverlap);
            long long rightLimit=(i<n-1)?r[i+1].first-1:2e9;
            int wallsRight=countWalls(curr_p,min(curr_p+curr_d,rightLimit));
            dp[i][1]=max(dp[i-1][0],dp[i-1][1])+wallsRight;
        }
        return max(dp[n-1][0],dp[n-1][1]);
    }
};
