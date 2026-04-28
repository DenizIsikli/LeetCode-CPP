#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(auto&r:grid){
            for(auto&x:r)v.push_back(x);
        }
        int ans=0;
        sort(v.begin(),v.end());
        int median=v[v.size()/2];
        for(int i=0;i<v.size();i++){
            int diff=abs(v[i]-median);
            if(diff%x!=0)return -1;
            ans+=diff/x;
        }
        return ans;
    }
};
