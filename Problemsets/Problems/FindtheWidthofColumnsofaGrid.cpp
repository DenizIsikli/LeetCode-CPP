#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,0);
        for(int j=0;j<m;j++){
            int maxWidth=0;
            for(int i=0;i<n;i++){
                int width=to_string(grid[i][j]).length();
                maxWidth=max(maxWidth,width);
            }
            ans[j]=maxWidth;
        }
        return ans;
    }
};
