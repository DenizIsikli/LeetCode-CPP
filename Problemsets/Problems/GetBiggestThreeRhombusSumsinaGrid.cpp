#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        set<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                s.insert(grid[i][j]);
                for(int k=1;;k++){
                    int row=i+2*k;
                    int left=j-k,right=j+k;
                    if(row>=n||left<0||right>=m)break;
                    int sm=0;
                    int x=i,y=j;
                    for(int l=0;l<k;l++){
                        sm+=grid[x+l][y+l];
                    }
                    for(int l=0;l<k;l++){
                        sm+=grid[x+k+l][y+k-l];
                    }
                    for(int l=0;l<k;l++){
                        sm+=grid[x+2*k-l][y-l];
                    }
                    for(int l=0;l<k;l++){
                        sm+=grid[x+k-l][y-k+l];
                    }
                    s.insert(sm);
                }
            }
        }
        vector<int>ans;
        for(auto it=s.rbegin();it!=s.rend()&&ans.size()<3;it++)ans.push_back(*it);
        return ans;
    }
};
