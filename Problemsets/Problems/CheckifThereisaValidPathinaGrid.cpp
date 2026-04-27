#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<vector<int>>>dirs={
            {},
            {{0,-1},{0,1}},
            {{-1,0},{1,0}},
            {{0,-1},{1,0}},
            {{0,1},{1,0}},
            {{0,-1},{-1,0}},
            {{0,1},{-1,0}}
        };
        queue<pair<int,int>>q;
        q.push({0,0});
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        vis[0][0]=true;
        while(!q.empty()){
            auto[x,y]=q.front();
            q.pop();
            if(x==n-1 && y==m-1)return true;
            for(auto&dir:dirs[grid[x][y]]){
                int newx=x+dir[0],newy=y+dir[1];
                if(newx>=0&&newx<n&&newy>=0&&newy<m&&!vis[newx][newy]){
                    for(auto&ndir:dirs[grid[newx][newy]]){
                        if(ndir[0]==-dir[0] && ndir[1]==-dir[1]){
                            vis[newx][newy]=true;
                            q.push({newx,newy});
                            break;
                        }
                    }
                }
            }
        }
        return false;
    }
};
