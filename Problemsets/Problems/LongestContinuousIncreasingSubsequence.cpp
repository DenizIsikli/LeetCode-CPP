#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=1,prev=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>prev){
                cnt++;
            }else{
                ans=max(ans,cnt);
                cnt=1;
            }
            prev=nums[i];
        }
        return max(ans,cnt);
    }
};
