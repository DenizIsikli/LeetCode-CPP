#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        unordered_map<int,int>fq;
        int l=0,ans=0,sz=s.size();
        for(int r=0;r<nums.size();r++){
            fq[nums[r]]++;
            while(fq.size()==sz){
                ans+=nums.size()-r;
                fq[nums[l]]--;
                if(fq[nums[l]]==0)fq.erase(nums[l]);
                l++;
            }
        }
        return ans;
    }
};
