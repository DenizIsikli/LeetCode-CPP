#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<pair<int,int>>v;
        for(auto&x:logs){
            v.push_back({x[0],1});
            v.push_back({x[1],-1});
        }
        sort(v.begin(),v.end());
        int mx=INT_MIN;
        int ans=0;
        int cnt=0;
        for(auto&x:v){
            if(x.second==1)cnt++;
            else cnt--;
            if(cnt>mx){
                mx=cnt;
                ans=x.first;
            }
        }
        return ans;
    }
};
