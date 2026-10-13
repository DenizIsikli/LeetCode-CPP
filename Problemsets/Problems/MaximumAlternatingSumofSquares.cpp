#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>v;
        for(auto&x:nums)v.push_back(abs(x));
        sort(v.begin(),v.end());
        long long ans=0;
        int l=0,r=v.size()-1;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans+=v[r]*v[r];
                r--;
            }else{
                ans-=v[l]*v[l];
                l++;
            }
        }
        return ans;
    }
};
