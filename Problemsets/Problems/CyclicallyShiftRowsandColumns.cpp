#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>tmp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                tmp[i][j]=grid[i][(j+rowShift[i])%n];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=tmp[(i+colShift[j])%n][j];
            }
        }
        return grid;
    }
};
