#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int sz=nums.size();
        unordered_map<int,int>fq;
        for(auto&v:nums){
            for(auto&x:v)fq[x]++;
        }
        vector<int>res;
        for(auto&[k,v]:fq){
            if(v==sz)res.push_back(k);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
