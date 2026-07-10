#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mnsm=INT_MAX;
        int n=nums.size();
        bool f=false;
        for(int i=0;i<n-2;i++){
            int cur=0;
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j] && nums[j]>nums[k]){
                        cur=nums[i]+nums[j]+nums[k];
                        mnsm=min(mnsm,cur);
                        f=true;
                    }
                }
            }
        }
        if(f==false) return -1;
        return mnsm;
    }
};
