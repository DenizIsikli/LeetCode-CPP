#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size(),m=isWater[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>res(n,vector<int>(m,INT_MAX));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    res[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        pair<int,int>dir[4]={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            for(auto&dx:dir){
                int nx=x+dx.first,ny=y+dx.second;
                if(nx>=0&&nx<n&&ny>=0&&ny<m&&res[nx][ny]==INT_MAX){
                    res[nx][ny]=res[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
        return res;
    }
};
