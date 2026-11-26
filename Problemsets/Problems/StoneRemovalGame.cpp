#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canAliceWin(int n) {
        int take=10;
        int f=1;
        while(n>=take){
            n-=take;
            take--;
            f=(f==1)?0:1;
        }
        return !f;
    }
};
