#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mn=INT_MAX,tmp=0;
        for(auto&x:nums){
            tmp+=x;
            mn=min(mn,tmp);
        }
        return mn<0?abs(mn)+1:1;
    }
};
