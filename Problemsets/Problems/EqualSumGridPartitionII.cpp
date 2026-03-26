#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef long long ll;
    bool solve(vector<vector<int>>&grid){
        int n=grid.size(),m=grid[0].size();
        ll botSm=0,topSm=0;
        vector<int>botFq(100001,0),topFq(100001,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                botSm+=grid[i][j];
                botFq[grid[i][j]]++;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                botSm-=grid[i][j];
                botFq[grid[i][j]]--;
                topSm+=grid[i][j];
                topFq[grid[i][j]]++;
            }
            if(botSm==topSm)return true;
            ll diffTop=topSm-botSm;
            if(diffTop>0&&diffTop<=100000){
                int h=i+1,w=m;
                if(h>1&&m>1){
                    if(topFq[diffTop])return true;
                }else if(h>1&&w==1){
                    if(grid[0][0]==diffTop||grid[i][0]==diffTop)return true;
                }else if(h==1&&w>1){
                    if(grid[0][0]==diffTop||grid[0][w-1]==diffTop)return true;
                }
            }
            ll diffBot=botSm-topSm;
            if(diffBot>0&&diffBot<=100000){
                int h=n-i-1,w=m;
                if(h>1&&m>1){
                    if(botFq[diffBot])return true;
                }else if(h>1&&w==1){
                    if(grid[i+1][0]==diffBot||grid[n-1][0]==diffBot)return true;
                }else if(h==1&&w>1){
                    if(grid[n-1][0]==diffBot||grid[n-1][w-1]==diffBot)return true;
                }
            }
        }
        return false;
    }

    bool canPartitionGrid(vector<vector<int>>& grid) {
        if(solve(grid))return true;
        vector<vector<int>>vert(grid[0].size(),vector<int>(grid.size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                vert[j][i]=grid[i][j];
            }
        }
        return solve(vert);
    }
};

