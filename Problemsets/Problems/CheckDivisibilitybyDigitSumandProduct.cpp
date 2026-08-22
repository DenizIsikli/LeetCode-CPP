#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDivisibility(int n) {
        int sm=0,pr=1;
        for(int x=n;x>0;x/=10){
            int d=x%10;
            sm+=d;
            pr*=d;
        }
        return (n%(sm+pr)==0);
    }
};
