#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<abs(mn))mn=nums[i];
            else if(abs(nums[i])==abs(mn))mn=max(mn,nums[i]);
        }
        return mn;
    }
};
