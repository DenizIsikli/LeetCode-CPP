#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>&nums,int l, int r){
        int prev=0,prev2=0;
        for(int i=l;i<=r;i++){
            int cur=max(prev,prev2+nums[i]);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        return max(solve(nums,0,nums.size()-2),solve(nums,1,nums.size()-1));
    }
};
