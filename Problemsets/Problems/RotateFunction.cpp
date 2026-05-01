#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        long long F=0;
        int sm=0;
        for(int i=0;i<n;i++){
            F+=(long)i*nums[i];
            sm+=nums[i];
        }
        long long ans=F;
        for(int k=1;k<n;k++){
            F=F+sm-(long)n*nums[n-k];
            ans=max(ans,F);
        }
        return ans;
    }
};
