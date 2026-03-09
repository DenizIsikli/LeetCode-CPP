#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int MOD=1e9+7;
    vector<vector<vector<int>>>dp;
    int limit,zero,one;
    int memoization(int cntOne,int cntZero, int last){
        if(cntOne==one&&cntZero==zero)return 1;
        if(cntOne>one||cntZero>zero)return 0;
        if(dp[cntOne][cntZero][last]!=-1)return dp[cntOne][cntZero][last];
        int res=0;
        if(last==1){
            for(int k=1;k<=limit&&cntZero+k<=zero;k++){
                res=(res+memoization(cntOne,cntZero+k,0))%MOD;
            }
        }else{
            for(int k=1;k<=limit&&cntOne+k<=one;k++){
                res=(res+memoization(cntOne+k,cntZero,1))%MOD;
            }
        }
       return dp[cntOne][cntZero][last]=res;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        this->zero=zero;this->one=one;this->limit=limit;
        dp.resize(one+1,vector<vector<int>>(zero+1,vector<int>(2,-1)));
        int res=0;
        res=(res+memoization(0,0,1))%MOD;
        res=(res+memoization(0,0,0))%MOD;
        return res;
    }
};
