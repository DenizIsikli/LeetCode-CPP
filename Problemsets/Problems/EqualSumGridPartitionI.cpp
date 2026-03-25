#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sm=0,cnt=0;
        for(auto&row:grid){
            for(int x:row){sm+=x;}
        }
        if(sm%2==1)return false;
        for(int i=0;i<grid.size()-1;i++){
            for(int j=0;j<grid[0].size();j++){
                cnt+=grid[i][j];
                if(cnt==sm/2)return true;
            }
        }
        cnt=0;
        for(int j=0;j<grid[0].size()-1;j++){
            for(int i=0;i<grid.size();i++){
                cnt+=grid[i][j];
                if(cnt==sm/2)return true;
            }
        }
        return false;
    }
};
