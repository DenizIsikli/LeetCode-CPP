#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0,f=0;
        for(auto&x:nums){
            ans^=x;
            if(ans!=0)f=1;
        }
        if(ans!=0)return nums.size();
        return f?nums.size()-1:0;
    }
};
