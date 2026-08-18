#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        if(k==nums.size())return *max_element(nums.begin(),nums.end());
        if(k==1){
            int mx=INT_MIN;
            for(auto&x:nums){
                if(fq[x]==1)mx=max(mx,x);
            }
            return mx==INT_MIN?-1:mx;
        }
        int n=nums.size()-1;
        if(nums[0]==nums[n])return -1;
        if(fq[nums[0]]>1&&fq[nums[n]]==1)return nums[n];
        if(fq[nums[0]]==1&&fq[nums[n]]>1)return nums[0];
        if(fq[nums[0]]==1&&fq[nums[n]]==1)return max(nums[0],nums[n]);
        return -1;
    }
};
