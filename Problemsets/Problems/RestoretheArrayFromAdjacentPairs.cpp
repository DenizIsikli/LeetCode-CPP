#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>adj;
        for(auto&it:adjacentPairs){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>ans;
        for(auto&it:adj){
            if(it.second.size()==1){
                ans.push_back(it.first);
                break;
            }
        }
        while(ans.size()<adj.size()){
            int l=ans.back();
            for(auto&x:adj[l]){
                if(ans.size()>1&&x==ans[ans.size()-2])continue;
                ans.push_back(x);
                break;
            }
        }
        return ans;
    }
};
