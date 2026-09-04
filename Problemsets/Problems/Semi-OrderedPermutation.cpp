#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mnIdx=0,mxIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) mnIdx=i;
            if(nums[i]==mx) mxIndex=i;
        }
        int ans=0;
        for(int i=mnIdx;i>0;i--){
            swap(nums[i],nums[i-1]);
            ans++;
        }
        for(int i=mxIndex;i<nums.size()-1;i++){
            swap(nums[i],nums[i+1]);
            ans++;
        }
        if(mnIdx>mxIndex)ans--;
        return ans;
    }
};
