#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto&r:roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }
        vector<bool>vis(n+1,false);
        int ans=INT_MAX;
        vis[1]=true;
        queue<int>q;
        q.push(1);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto&[neigh,weight]:adj[node]){
                ans=min(ans,weight);
                if(!vis[neigh]){
                    vis[neigh]=true;
                    q.push(neigh);
                }
            }
        }
        return ans;
    }
};
