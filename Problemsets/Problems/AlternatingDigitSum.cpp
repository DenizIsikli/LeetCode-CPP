#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,f=1;
        while(n){
            sum+=f*(n%10);
            f*=-1;
            n/=10;
        }
        return -f*sum;
    }
};
