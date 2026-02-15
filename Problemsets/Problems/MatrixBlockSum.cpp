#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>>res(mat.size(),vector<int>(mat[0].size(),0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                int sm=0;
                for(int x=max(0,i-k);x<=min((int)mat.size()-1,i+k);x++){
                    for(int y=max(0,j-k);y<=min((int)mat[0].size()-1,j+k);y++){
                        sm+=mat[x][y];
                    }
                }
                res[i][j]=sm;
            }
        }
        return res;
    }
};
