#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mn=INT_MAX;
        vector<int>vt;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==2)vt.push_back(i);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)continue;
            if(nums[i]==1){
                int lower=lower_bound(vt.begin(),vt.end(),i)-vt.begin();
                int upper=upper_bound(vt.begin(),vt.end(),i)-vt.begin();
                if(lower<vt.size())mn=min(mn,abs(vt[lower]-i));
                if(upper>0)mn=min(mn,abs(vt[upper-1]-i));
            }
        }
        return (mn==INT_MAX)?-1:mn;
    }
};
