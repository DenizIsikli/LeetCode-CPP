#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>mini(nums.size());
        int mn=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            mn=min(mn,nums[i]);
            mini[i]=mn;
        }
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            if(mx-mini[i]<=k)return i;
        }
        return -1;
    }
};
