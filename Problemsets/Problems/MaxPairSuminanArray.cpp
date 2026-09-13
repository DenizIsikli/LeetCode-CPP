#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<vector<int>>v(9,vector<int>());
        for(auto&x:nums){
            int mxdig=0;
            int n=x;
            while(x){
                mxdig=max(mxdig,x%10);
                x/=10;
            }
            v[mxdig-1].push_back(n);
        }
        int ans=-1;
        for(int i=0;i<9;i++){
            if(v[i].size()>=2){
                sort(v[i].begin(),v[i].end());
                ans=max(ans,v[i][v[i].size()-1]+v[i][v[i].size()-2]);
            }
        }
        return ans;
    }
};
