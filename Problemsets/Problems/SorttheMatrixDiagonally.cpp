#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>res;
        bool flag=false;
        for(int i=mat.size()-1;i>=0;i--){
            if(i==0) flag=true;
            vector<int>tmp;
            for(int j=0;j<mat[0].size();j++){
                if(i+j<mat.size()){
                    tmp.push_back(mat[i+j][j]);
                }
            }
            sort(tmp.begin(), tmp.end());
            for(int j=0;j<mat[0].size();j++){
                if(i+j<mat.size()){
                    mat[i+j][j]=tmp[j];
                }
            }
            if(flag){break;}
        }
        for(int i=1;i<mat[0].size();i++){
            vector<int>tmp;
            for(int j=0;j<mat.size();j++){
                if(i+j<mat[0].size()){
                    tmp.push_back(mat[j][i+j]);
                }
            }
            sort(tmp.begin(), tmp.end());
            for(int j=0;j<mat.size();j++){
                if(i+j<mat[0].size()){
                    mat[j][i+j]=tmp[j];
                }
            }
        }
        return mat;
    }
};
