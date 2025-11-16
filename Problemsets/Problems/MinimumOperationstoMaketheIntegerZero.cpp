#include <bits/stdc++.h>

class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num2==0) return __builtin_popcount(unsigned(num1));
        long long x=num1;
        for(int i=1;i<36;i++){
            x-=num2;
            if(x<i)return -1;
            if(x>=0&&i>=__builtin_popcountll((unsigned long long)(x)))return i;
        }
        return -1;
    }
};
