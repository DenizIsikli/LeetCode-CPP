#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>fq;
        vector<int>ans;
        for(auto&x:nums)fq[x]++;
        for(int i=0;i<nums.size();i++){
            if(fq[nums[i]]>k){
                fq[nums[i]]--;
                continue;
            }
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
