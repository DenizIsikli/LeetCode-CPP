#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long>ans(nums.size());
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]].push_back(i);
        for(auto&[k,v]:mp){
            if(v.size()==1){ans[v[0]]=0;continue;}
            long long sm=0;
            for(auto&x:v)sm+=x;
            long long lsm=0;
            for(int i=0;i<v.size();i++){
                long long rsm=sm-lsm-v[i];
                long long l=1LL*v[i]*i-lsm;
                long long r=rsm-1LL*v[i]*(v.size()-i-1);
                ans[v[i]]=l+r;
                lsm+=v[i];
            }
        }
        return ans;
    }
};
