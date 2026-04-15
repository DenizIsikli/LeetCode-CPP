#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int res=0;
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int m=l+(r-l)/2;
            auto rob=[&](vector<int>& nums, int m, int k) {
                int count=0;
                for (int i=0;i<nums.size();i++) {
                    if(nums[i]<=m) {
                        count++;
                        i++;
                    }
                }
                return count>=k;
            };
            if(rob(nums,m,k)){
                res=m;
                r=m-1;
            }else l=m+1;
        }
        return res; 
    }
};
