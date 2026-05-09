#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<min(n,m)/2;i++){
            vector<int>v;
            for(int j=i;j<m-i;j++)v.push_back(grid[i][j]);
            for(int j=i+1;j<n-i-1;j++)v.push_back(grid[j][m-i-1]);
            for(int j=m-i-1;j>=i;j--)v.push_back(grid[n-i-1][j]);
            for(int j=n-i-2;j>i;j--)v.push_back(grid[j][i]);
            int sz=v.size();
            int kk=k%sz;
            rotate(v.begin(),v.begin()+kk,v.end());
            int idx=0;
            for(int j=i;j<m-i;j++)grid[i][j]=v[idx++];
            for(int j=i+1;j<n-i-1;j++)grid[j][m-i-1]=v[idx++];
            for(int j=m-i-1;j>=i;j--)grid[n-i-1][j]=v[idx++];
            for(int j=n-i-2;j>i;j--)grid[j][i]=v[idx++];
        }
        return grid;
    }
};
