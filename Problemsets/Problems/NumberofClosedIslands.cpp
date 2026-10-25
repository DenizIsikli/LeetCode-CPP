#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    bool f=true;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]=1;
                    while(!q.empty()){
                        auto [x,y]=q.front();
                        q.pop();
                        for(auto&d:dir){
                            int nx=x+d[0],ny=y+d[1];
                            if(nx<0||nx>=grid.size()||ny<0||ny>=grid[0].size())f=false;
                            else if(grid[nx][ny]==0){
                                q.push({nx,ny});
                                grid[nx][ny]=1;
                            }
                        }
                    }
                    if(f)ans++;
                }
            }
        }
        return ans;
    }
};
