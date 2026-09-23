#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int tot=accumulate(nums.begin(),nums.end(),0);
        int target=tot-x;
        if(target<0)return -1;
        if(target==0)return n;
        int l=0,sm=0,lng=-1;
        for(int r=0;r<n;r++){
            sm+=nums[r];
            while(l<=r&&sm>target)sm-=nums[l++];
            if(sm==target)lng=max(lng,r-l+1);
        }
        return lng==-1?-1:n-lng;
    }
};
