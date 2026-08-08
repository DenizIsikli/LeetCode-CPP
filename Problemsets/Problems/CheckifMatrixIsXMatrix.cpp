#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                bool ondiag=(i==j)||(i+j==n-1);
                if(ondiag&&grid[i][j]==0)return false;
                if(!ondiag&&grid[i][j]!=0)return false;
            }
        }
        return true;
    }
};
