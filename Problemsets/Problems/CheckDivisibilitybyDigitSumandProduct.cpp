#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDivisibility(int n) {
        int sm=0,pr=1,tmp=n;
        while(tmp){
            int dig=tmp%10;
            sm+=dig;
            pr*=dig;
            tmp/=10;
        }
        int tot=sm+pr;
        return n%tot==0;
    }
};
