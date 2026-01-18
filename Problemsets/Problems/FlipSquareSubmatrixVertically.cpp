#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i=x,j=x+k-1;i<j;i++,j--){
            for(int z=y;z<y+k;z++){
                swap(grid[i][z],grid[j][z]);
            }
        }
        return grid;
    }
};
