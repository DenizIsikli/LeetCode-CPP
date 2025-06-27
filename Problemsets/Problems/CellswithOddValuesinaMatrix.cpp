#include <vector>

using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>tmp(m,vector<int>(n));
        for(auto &v:indices){
            int r=v[0],c=v[1];
            for(int i=0;i<n;i++){
                tmp[r][i]++;
            }
            for(int i=0;i<m;i++){
                tmp[i][c]++;
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(tmp[i][j]%2!=0)cnt++;
            }
        }
        return cnt;
    }
};
