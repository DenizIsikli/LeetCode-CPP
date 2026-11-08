#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n=nums.size(),idx=0;
        while(idx<n&&nums[idx]==target[idx])idx++;
        sort(nums.begin()+idx,nums.end(),greater<int>());
        if(nums!=target) return 0;
        int ans=1;
        for(int i=min(idx,n-1)-1;i>=0;i--){
            if(nums[i]>=nums[i+1]) ans++;
            else break;
        }
        return ans;
    }
};
