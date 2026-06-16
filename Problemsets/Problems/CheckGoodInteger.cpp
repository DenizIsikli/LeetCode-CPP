#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkGoodInteger(int n) {
        int sm=0,sm2=0;
        while(n){
            int x=n%10;
            sm+=x;
            sm2+=(x*x);
            n/=10;
        }
        return(sm2-sm>=50?true:false);
    }
};
