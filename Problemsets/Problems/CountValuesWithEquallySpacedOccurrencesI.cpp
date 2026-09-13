#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]].push_back(i);
        int ans=0;
        for(auto&it:mp){
            if(it.second.size()==3&&(abs(it.second[0]-it.second[1])==abs(it.second[1]-it.second[2])))ans++;
        }
        return ans;
    }
};
