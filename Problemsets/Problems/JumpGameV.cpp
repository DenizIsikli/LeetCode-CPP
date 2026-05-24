#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<int>& arr,int d,int idx,vector<int>&ans){
        if(ans[idx]!=-1)return;
        ans[idx]=1;
        for(int i=idx+1;i<=min(idx+d,(int)arr.size()-1);i++){
            if(arr[i]>=arr[idx])break;
            dfs(arr,d,i,ans);
            ans[idx]=max(ans[idx],ans[i]+1);
        }
        for(int i=idx-1;i>=max(idx-d,0);i--){
            if(arr[i]>=arr[idx])break;
            dfs(arr,d,i,ans);
            ans[idx]=max(ans[idx],ans[i]+1);
        }
    }
    int maxJumps(vector<int>& arr, int d) {
        int mx=INT_MIN;
        vector<int>ans(arr.size(),-1);
        for(int i=0;i<arr.size();i++){
            dfs(arr,d,i,ans);
        }
        for(int i=0;i<ans.size();i++)mx=max(mx,ans[i]);
        return mx;
    }
};
