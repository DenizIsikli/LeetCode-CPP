#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x=coordinates[0][0],y=coordinates[0][1];
        int dx=coordinates[1][0]-x,dy=coordinates[1][1]-y;
        for(int i=2;i<coordinates.size();i++){
            int dx_i=coordinates[i][0]-x,dy_i=coordinates[i][1]-y;
            if(dx*dy_i!=dy*dx_i) return false;
        }
        return true;
    }
};
