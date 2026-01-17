#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long res=0;
        int n=bottomLeft.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=max(bottomLeft[i][0],bottomLeft[j][0]);
                int right=min(topRight[i][0],topRight[j][0]);
                int bottom=max(bottomLeft[i][1],bottomLeft[j][1]);
                int top=min(topRight[i][1],topRight[j][1]);
                int width=right-left;
                int height=top-bottom;
                if(width>0&&height>0){
                    long long side=min(width,height);
                    res=max(res,side*side);
                }
            }
        }
        return res;
    }
};
