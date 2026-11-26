#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(int n) {
        if(n==1)return 0;
        int stp=0,fct=2;
        while(n>1){
            while(n%fct==0){
                stp+=fct;
                n/=fct;
            }
            fct++;
        }
        return stp;
    }
};
