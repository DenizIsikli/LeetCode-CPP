#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int mx=0;
        unordered_map<bitset<300>,int,hash<bitset<300>>>mp;
        mp.reserve(matrix.size());
        for(int i=0;i<matrix.size();i++){
            bitset<300>bi;
            int dec=matrix[i][0];
            for(int j=0;j<matrix[0].size();j++){
                bi[j]=matrix[i][j]^dec;
            }
            mp[bi]++;
        }
        for(auto&[k,cnt]:mp)mx=max(mx,cnt);
        return mx;
    }
};
