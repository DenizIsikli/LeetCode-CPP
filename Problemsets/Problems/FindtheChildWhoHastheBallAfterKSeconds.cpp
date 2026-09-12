#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfChild(int n, int k) {
        int rnd=k/(n-1);
        int rem=k%(n-1);
        return rnd%2?n-1-rem:rem;
    }
};
