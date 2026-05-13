#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        vector<int>cnt(2*limit+2,0);
        for(int i=0;i<nums.size()/2;i++){
            auto[x,y]=minmax(nums[i],nums[nums.size()-1-i]);
            cnt[2]+=2;
            cnt[x+1]-=1;
            cnt[x+y]-=1;
            cnt[x+y+1]+=1;
            cnt[y+limit+1]+=1;
        }
        int ans=INT_MAX;
        int mv=0;
        for(int i=2;i<=2*limit;i++){
            mv+=cnt[i];
            ans=min(ans,mv);
        }
        return ans;
    }
};
