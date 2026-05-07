#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(std::vector<int>& nums) {
        int curr=0,mx=0,jm=0;
        for(int i=0;i<nums.size();i++){
            if(i>curr){
                curr=mx;
                jm++;
            }
            mx=max(mx,i+nums[i]);
        }
        return jm;
    }
};
