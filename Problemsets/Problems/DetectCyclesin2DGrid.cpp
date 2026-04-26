#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool bfs(vector<vector<char>>&grid,vector<vector<bool>>&vis,int i,int j){
        queue<pair<pair<int,int>,pair<int,int>>>q;
        q.push({{i,j},{-1,-1}});
        vis[i][j]=true;
        int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto cur=q.front();
            q.pop();
            int x=cur.first.first;
            int y=cur.first.second;
            int ox=cur.second.first;
            int oy=cur.second.second;
            for(auto&dir:dirs){
                int nx=x+dir[0];
                int ny=y+dir[1];
                if(nx<0||ny<0||nx>=grid.size()||ny>=grid[0].size())continue;
                if(grid[nx][ny]!=grid[x][y])continue;
                if(nx==ox&&ny==oy)continue;
                if(vis[nx][ny])return true;
                vis[nx][ny]=true;
                q.push({{nx,ny},{x,y}});
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j]){
                    if(bfs(grid,vis,i,j))return true;
                }
            }
        }
        return false;
    }
};
