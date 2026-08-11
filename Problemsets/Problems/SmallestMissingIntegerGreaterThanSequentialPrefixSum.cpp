#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(), nums.end());
        int sm=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)sm+=nums[i];
            else break;
        }
        while(seen.count(sm))sm++;
        return sm;
    }
};
