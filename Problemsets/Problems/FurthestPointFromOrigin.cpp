#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntl=0,cntr=0,rem=0;
        for(auto&c:moves){
            if(c=='L')cntl++;
            else if(c=='R')cntr++;
            else rem++;
        }
        return abs(max(cntl,cntr)+rem-min(cntl,cntr));
    }
};
