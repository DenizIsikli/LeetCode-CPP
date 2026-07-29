#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[n-1],idx=1;
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>sum/idx)ans++;
            sum+=nums[i];
            idx++;
        }
        return ans;
    }
};
