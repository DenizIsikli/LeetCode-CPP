#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return -1;
        unordered_map<int,vector<int>>idx;
        for(int i=0;i<n;i++)idx[nums[i]].push_back(i);
        int ans=INT_MAX;
        for(auto&[k,v]:idx){
            int m=v.size();
            if(m>=3){
                for(int i=0;i<m-2;i++){
                    ans=min(ans,2*(v[i+2]-v[i]));
                }
            }
        }
        return (ans==INT_MAX?-1:ans);
    }
};

