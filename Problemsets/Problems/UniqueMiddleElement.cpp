#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        return (fq[nums[nums.size()/2]]==1?true:false);
    }
};
