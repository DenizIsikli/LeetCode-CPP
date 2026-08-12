#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>fq;
        int ans=0,left=0;
        for(int right=0;right<nums.size();right++){
            fq[nums[right]]++;
            while(fq[nums[right]]>k){
                fq[nums[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
