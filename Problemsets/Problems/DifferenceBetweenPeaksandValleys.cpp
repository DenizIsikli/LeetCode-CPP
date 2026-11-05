#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int p=0,v=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])p+=nums[i];
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1])v+=nums[i];
        }
        return p-v;
    }
};
