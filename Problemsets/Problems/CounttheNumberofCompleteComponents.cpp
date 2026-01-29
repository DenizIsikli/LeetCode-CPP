#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    void bfs(int node, vector<vector<int>>&adj,vector<int>&cmp,vector<bool>&vis){
        queue<int>q;
        q.push(node);
        vis[node]=true;
        while(!q.empty()){
            int p=q.front();q.pop();
            cmp.push_back(p);
            for(auto it:adj[p]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int res=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int>cmp;
                bfs(i,adj,cmp,vis);
                bool isSameSz=true;
                for(auto it:cmp){
                    if(adj[it].size()!=cmp.size()-1)isSameSz=false;
                }
                if(isSameSz)res++;
            }
        }
        return res;;
    }
};

// DFS
class SolutionDFS{
private:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&cmp,vector<bool>&vis){
        vis[node]=true;
        cmp.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,cmp,vis);
            }
        }
    }
public:
    int countCompleteComponents(int n,vector<vector<int>>&edges){
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int res=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int>cmp;
                dfs(i,adj,cmp,vis);
                bool isSameSz=true;
                for(auto it:cmp){
                    if(adj[it].size()!=cmp.size()-1)isSameSz=false;
                }
                if(isSameSz)res++;
            }
        }
        return res;
    }
};

