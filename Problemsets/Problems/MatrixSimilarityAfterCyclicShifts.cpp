#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>res(mat.size(),vector<int>(mat[0].size(),0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                res[i][j]=mat[i][(j+k)%mat[0].size()];
            }
        }
        return (res==mat)?1:0;
    }
};
