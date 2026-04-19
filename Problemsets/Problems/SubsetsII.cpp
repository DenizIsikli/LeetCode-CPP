#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans={{}};
        sort(nums.begin(),nums.end());
        for(auto&x:nums){
            int n=ans.size();
            for(int i=0;i<n;i++){
                vector<int>tmp=ans[i];
                tmp.push_back(x);
                if(find(ans.begin(),ans.end(),tmp)==ans.end())ans.push_back(tmp);
            }
        }
        return ans;
    }
};

class SolutionRecursive {
public:
    void dfs(int idx,vector<int>&tmp,vector<vector<int>>&ans,vector<int>&nums){
        ans.push_back(tmp);
        for(int i=idx;i<nums.size();i++){
            if(i>idx&&nums[i]==nums[i-1])continue;
            tmp.push_back(nums[i]);
            dfs(i+1,tmp,ans,nums);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>tmp;
        sort(nums.begin(),nums.end());
        dfs(0,tmp,ans,nums);
        return ans;
    }
};
