#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool f=false;
        for(int i=1;i<nums.size();i++)if(nums[i]!=nums[i-1]){f=true;break;}
        return f;
    }
};
