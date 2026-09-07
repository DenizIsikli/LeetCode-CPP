#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;
        set<int>s;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=k)s.insert(nums[i]);
            if(s.size()==k)return ans+1;
            ans++;
        }
        return -1;
    }
};
