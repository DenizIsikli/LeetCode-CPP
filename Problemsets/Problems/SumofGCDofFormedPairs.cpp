#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=0;
        for(auto&x:nums){
            mx=max(mx,x);
            x=gcd(x,mx);
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<nums.size()/2;i++){
            ans+=gcd(nums[i],nums[nums.size()-1-i]);
        }
        return ans;
    }
};
