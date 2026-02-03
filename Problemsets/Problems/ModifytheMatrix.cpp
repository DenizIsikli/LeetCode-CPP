#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>res=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1){
                    int mx=-1;
                    for(int k=0;k<matrix.size();k++){
                        mx=max(mx,matrix[k][j]);
                    }
                    matrix[i][j]=mx;
                }
            }
        }
        return matrix;
    }
};
