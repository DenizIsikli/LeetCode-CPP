#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int cntz=0;
        for(auto&c:nums)if(c==0)cntz++;
        int r=nums.size()-1,zbl=0;
        int tmp=cntz;
        while(tmp--){
            if(nums[r]==0)zbl++;
            r--;
        }
        return cntz-zbl;
    }
};
