#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int>sm;
        for(int i=0;i<nums.size()-1;i++)sm.push_back(nums[i]+nums[i+1]);
        sort(sm.begin(),sm.end());
        for(int i=1;i<sm.size();i++){
            if(sm[i]==sm[i-1])return true;
        }
        return false;
    }
};
