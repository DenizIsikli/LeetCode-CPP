#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if((ll)nums[0]*k>=nums.back())return 0;
        int n=nums.size();
        int ans=n;
        for(int l=0,r=0;r<n;r++){
            while(l<r&&(ll)nums[l]*k<nums[r])l++;
            ans=min(ans,n-(r-l+1));
        }
        return ans;
    }
};
