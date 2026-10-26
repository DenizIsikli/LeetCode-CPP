#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        int dirs[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0){
                    long long sm=0;
                    queue<pair<int,int>>q;
                    sm+=grid[i][j];
                    grid[i][j]=-1;
                    q.push({i,j});
                    while(!q.empty()){
                        auto [x,y]=q.front();q.pop();
                        for(auto d:dirs){
                            int nx=x+d[0],ny=y+d[1];
                            if(nx<0||nx>=grid.size()||ny<0||ny>=grid[0].size()||grid[nx][ny]<=0)continue;
                            sm+=grid[nx][ny];
                            grid[nx][ny]=-1;
                            q.push({nx,ny});
                        }
                    }
                    if(sm%k==0)ans++;
                }
            }
        }
        return ans;
    }
};
