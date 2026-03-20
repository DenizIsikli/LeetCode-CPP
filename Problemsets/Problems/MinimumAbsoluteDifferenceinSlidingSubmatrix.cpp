#include<bits/stdc++.h>
using namespace std;
int kkSub[900]; const int INF=2e5+1;
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int kk=k*k;
        vector<vector<int>>ans(grid.size()-k+1,vector<int>(grid[0].size()-k+1));
        for(int i=0;i<=grid.size()-k;i++){
            for(int j=0;j<=grid[0].size()-k;j++){
                int idx=0;
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        kkSub[idx++]=grid[x][y];
                    }
                }
                sort(kkSub,kkSub+kk);
                int mn=INF;
                for(int z=1;z<kk;z++){
                    int diff=kkSub[z]-kkSub[z-1];
                    if(diff>0)mn=min(mn,diff);
                }
                ans[i][j]=(mn==INF)?0:mn;
            }
        }
        return ans;
    }
};

class Solution1 {
public:
    void minAbsDiff(vector<vector<int>>&grid,vector<vector<int>>&ans,int x,int y,int k){
        set<int>s;
        for(int i=x;i<x+k;i++){
            for(int j=y;j<y+k;j++){
                s.insert(grid[i][j]);
            }
        }
        if(s.size()==1){
            ans[x][y]=0;
            return;
        }
        vector<int>tmp(s.begin(),s.end());
        int mn=INT_MAX;
        for(int i=1;i<tmp.size();i++){
            mn=min(mn,abs(tmp[i]-tmp[i-1]));
        }
        ans[x][y]=mn;
    }

    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        vector<vector<int>>ans(grid.size()-k+1,vector<int>(grid[0].size()-k+1));
        for(int i=0;i<=grid.size()-k;i++){
            for(int j=0;j<=grid[0].size()-k;j++){
                minAbsDiff(grid,ans,i,j,k);
            }
        }
        return ans;
    }
};

