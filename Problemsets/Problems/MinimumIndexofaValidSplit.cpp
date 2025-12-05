#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        int mx=0,nr=0;
        for(auto&[k,v]:fq){
            if(v>mx)mx=v,nr=k;
        }
        int lMx=0,rMx=mx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nr){lMx++;rMx--;}
            if(lMx*2>(i+1)&&rMx*2>(nums.size()-i-1))return i;
        }
        return -1;
    }
};
