#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=nums[k-1]-nums[0];
        for(int i=0;i+k<=nums.size();i++){
            res=min(res,nums[i+k-1]-nums[i]);
        }
        return res;
    }
};
