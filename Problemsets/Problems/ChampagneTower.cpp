#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double pr[102][102]={0,0};
        pr[0][0]=(double)poured;
        for(int r=0;r<=query_row;r++){
            for(int c=0;c<=r;c++){
                if(pr[r][c]>1.0){
                    double excess=(pr[r][c]-1.0)/2.0;
                    pr[r][c]=1.0;
                    pr[r+1][c]+=excess,pr[r+1][c+1]+=excess;
                }
            }
        }
        return pr[query_row][query_glass];
    }
};
