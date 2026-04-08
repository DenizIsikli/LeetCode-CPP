#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto&q:queries){
            int li=q[0],ri=q[1],ki=q[2],vi=q[3];
            int idx=li;
            while(idx<=ri){
                nums[idx]=(1LL*nums[idx]*vi)%mod;
                idx+=ki;
            }
        }
        int ans=0;
        for(int&x:nums)ans^=x;
        return ans;
    }
};
