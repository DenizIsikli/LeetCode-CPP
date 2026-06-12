#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int>ans;int tmp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1)tmp++;
            }
            ans.push_back(tmp);tmp=0;
        }
        return ans;
    }
};
