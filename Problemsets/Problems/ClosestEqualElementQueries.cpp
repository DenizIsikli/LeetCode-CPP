#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto&vec:mp){
            auto v=vec.second;
            int sz=v.size();
            if(sz==1){
                nums[v[0]]=-1;
                continue;
            }
            for(int i=0;i<sz;i++){
                int r=v[(i+1)%sz],l=v[(i-1+sz)%sz];
                int right=min(n-v[i]+r,abs(v[i]-r));
                int left=min(abs(l-v[i]),v[i]+n-l);
                nums[v[i]]=min(left,right);
            }
        }
        for(int i=0;i<queries.size();i++){
            queries[i]=nums[queries[i]];
        }
        return queries;
    }
};
