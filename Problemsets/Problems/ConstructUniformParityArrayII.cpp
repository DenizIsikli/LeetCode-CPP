#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int cntOdd=0,xmin=1e9;
        for(int x:nums1){
            cntOdd+=x&1;
            xmin=min(xmin,x);
        }
        return xmin&1||cntOdd==0;
    }
};
