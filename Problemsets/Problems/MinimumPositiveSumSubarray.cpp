#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++)pre[i+1]=pre[i]+nums[i];
        int ans=INT_MAX;
        for(int k=l;k<=r;k++){
            for(int i=0;i<=n-k;i++){
                int sm=pre[i+k]-pre[i];
                if(sm>0)ans=min(ans,sm);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
