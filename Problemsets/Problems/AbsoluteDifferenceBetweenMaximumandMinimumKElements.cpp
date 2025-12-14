#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int l=0,s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            l+=nums[nums.size()-1-i];
            s+=nums[i];
        }
        return abs(l-s);
    }
};
