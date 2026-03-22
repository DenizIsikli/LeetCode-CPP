#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool f=false;
        for(int k=0;k<4;k++){
            for(int i=0;i<mat.size();i++){
                for(int j=i+1;j<mat.size();j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<mat.size();i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if(mat==target){
                f=true;
                break;
            }
        }
        return f;
    }
};
