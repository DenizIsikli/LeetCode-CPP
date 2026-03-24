#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod=12345;
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
        uint64_t pre=1,suf=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans[i][j]=pre;
                pre=pre*grid[i][j]%mod;
            }
        }
        for(int i=grid.size()-1;i>=0;i--){
            for(int j=grid[0].size()-1;j>=0;j--){
                ans[i][j]=ans[i][j]*suf%mod;
                suf=suf*grid[i][j]%mod;
            }
        }
        return ans;
    }
};
