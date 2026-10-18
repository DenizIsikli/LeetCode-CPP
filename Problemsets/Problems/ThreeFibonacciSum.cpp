#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long x=0,y=1,z=1;
        while(x+y+z<n){
            x=y,y=z,z=x+y;
        }
        return x+y+z==n;
    }
};
