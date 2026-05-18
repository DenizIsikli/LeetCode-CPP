#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++)mp[arr[i]].push_back(i);
        int steps=0;
        vector<bool>vis(arr.size(),false);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int idx=q.front();
                q.pop();
                if(idx==arr.size()-1)return steps;
                if(idx-1>=0&&!vis[idx-1]){vis[idx-1]=true;q.push(idx-1);}
                if(idx+1<=arr.size()-1&&!vis[idx+1]){vis[idx+1]=true;q.push(idx+1);}
                for(int k:mp[arr[idx]]){
                    if(!vis[k]){
                        vis[k]=true;
                        q.push(k);
                    }
                }
                mp[arr[idx]].clear();
            }
            steps++;
        }
        return steps;
    }
};
