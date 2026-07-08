#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        auto digRange=[](int x){
            int mn=INT_MAX,mx=INT_MIN;
            while(x>0){
                int d=x%10;
                mn=min(mn,d);
                mx=max(mx,d);
                x/=10;
            }
            return mx-mn;
        };
        int mxRange=INT_MIN;
        for(auto&x:nums){
            mxRange=max(mxRange,digRange(x));
        }
        int sm=0;
        for(auto&x:nums){
            if(digRange(x)==mxRange) sm+=x;
        }
        return sm;
    }
};
