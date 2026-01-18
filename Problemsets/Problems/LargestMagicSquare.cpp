#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        auto validSquare=[](vector<vector<int>>&grid,int i,int j,int sqSz) -> bool {
            int sqSm=0;
            for(int k=0;k<sqSz;k++)sqSm+=grid[i+k][j+k];
            for(int p=0;p<sqSz;p++){
                int sm=0;
                for(int q=0;q<sqSz;q++){
                    sm+=grid[i+p][j+q];
                }
                if(sm!=sqSm)return false;
            }
            for(int p=0;p<sqSz;p++){
                int sm=0;
                for(int q=0;q<sqSz;q++){
                    sm+=grid[i+q][j+p];
                }
                if(sm!=sqSm)return false;
            }
            for(int k=0;k<sqSz;k++)sqSm-=grid[i+k][j+sqSz-1-k];
            if(sqSm==0)return true;
            return false;
        };
        int res=1;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                int sqSz=2;
                while(i+sqSz<=n&&j+sqSz<=m){
                    if(validSquare(grid,i,j,sqSz))res=max(res,sqSz);
                    sqSz++;
                }
            }
        }
        return res;
    }
};
