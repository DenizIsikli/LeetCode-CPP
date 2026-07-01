#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int rOpt=0,cOpt=0;
        vector<vector<int>>g1=grid,g2=grid;
        for(int i=0;i<g1.size();i++){
            for(int j=0;j<g1[0].size()/2;j++){
                if(g1[i][j]!=g1[i][g1[0].size()-j-1]){
                    g1[i][j]=g1[i][g1[0].size()-j-1];
                    rOpt++;
                }
            }
        }
        for(int j=0;j<g2[0].size();j++){
            for(int i=0;i<g2.size()/2;i++){
                if(g2[i][j]!=g2[g2.size()-i-1][j]){
                    g2[i][j]=g2[g2.size()-i-1][j];
                    cOpt++;
                }
            }
        }
        return min(rOpt,cOpt);
    }
};
