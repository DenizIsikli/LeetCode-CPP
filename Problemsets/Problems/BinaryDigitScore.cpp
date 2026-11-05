#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculateScore(int a, int b) {
        int a_set=__builtin_popcount(a);
        int b_set=__builtin_popcount(b);
        if(a_set>=b_set)return a_set*b_set;
        return b_set/a_set;
    }
};
