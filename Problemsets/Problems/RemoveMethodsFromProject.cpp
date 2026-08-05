#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n+1);
        vector<int>vis(n);
        for(auto&x:invocations)adj[x[0]].push_back(x[1]);
        queue<int>q;
        q.push(k);
        vis[k]=1;
        while(!q.empty()){
            int el=q.front();
            q.pop();
            for(auto&x:adj[el]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
        for(auto&x:invocations){
            if(!vis[x[0]]&&vis[x[1]]){
                vector<int>ans;
                for(int i=0;i<n;i++)ans.push_back(i);
                return ans;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)if(!vis[i])ans.push_back(i);
        return ans;
    }
};
