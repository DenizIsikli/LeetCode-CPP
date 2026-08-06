#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestNumber(int n, int t) {
        int res=0;
        for(int i=n;i<INT_MAX;i++){
            int sm=0;
            int x=1,y=i;
            while(y){
                x*=y%10;
                y/=10;
                if(x%t==0){res=i;return res;}
            }
        }
        return res;
    }
};
