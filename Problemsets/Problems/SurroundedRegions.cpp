#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||j==0||i==n-1||j==m-1)&&board[i][j]=='O'){
                    q.push({i,j});
                    board[i][j]='#';
                }
            }
        }
        while(!q.empty()){
            auto[x,y]=q.front();q.pop();
            for(auto&d:dir){
                int nx=x+d[0],ny=y+d[1];
                if(nx>=0&&nx<n&&ny>=0&&ny<m&&board[nx][ny]=='O'){
                    board[nx][ny]='#';
                    q.push({nx,ny});
                }
            }
        }
        for(auto&row:board){
            for(auto&c:row){
                c=(c=='O')?'X':(c=='#')?'O':c;
            }
        }
    }
};
