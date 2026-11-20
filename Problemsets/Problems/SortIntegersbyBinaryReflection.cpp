#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(auto&x:nums){
            int r=0,t=x;
            while(t>0){
                r=(r<<1)|(t&1);
                t>>=1;
            }
            v.push_back({r,x});
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        for(auto&x:v)ans.push_back(x.second);
        return ans;
    }
};
