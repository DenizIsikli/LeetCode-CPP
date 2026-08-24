#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        auto f=[&](vector<int>&v)->int{
            while(nums.size()>=1){
                vector<int>nwv(v.size()/2);
                for(int i=0;i<v.size()/2;i++){
                    if(i%2==0)nwv[i]=min(nums[2*i],nums[2*i+1]);
                    else nwv[i]=max(nums[2*i],nums[2*i+1]);
                }
                nums=nwv;
            }
            return nums[0];
        };
        int n=nums.size();
        if(n==1)return nums[0];
        else{return f(nums);}
    }
};
