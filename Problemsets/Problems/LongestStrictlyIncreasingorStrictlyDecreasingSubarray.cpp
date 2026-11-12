#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=INT_MIN,dec=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                int idx=i;
                while(idx<nums.size() && nums[idx]>nums[idx-1]){
                    idx++;
                }
                inc=max(inc,idx-i+1);
            }else if(nums[i]<nums[i-1]){
                int idx=i;
                while(idx<nums.size() && nums[idx]<nums[idx-1]){
                    idx++;
                }
                dec=max(dec,idx-i+1);
            }
        }
        if(inc==INT_MIN&&dec==INT_MIN){return 1;}
        return max(inc,dec);
    }
};
