#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(vector<int>& arr,vector<bool>&vis,int idx){
        if(idx<0||idx>=arr.size()||vis[idx])return false;
        if(arr[idx]==0)return true;
        vis[idx]=true;
        return dfs(arr,vis,idx+arr[idx])||dfs(arr,vis,idx-arr[idx]);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),false);
        bool f=dfs(arr,vis,start);
        return f;
    }
};
