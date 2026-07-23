#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
        int mask=0;
        for(auto&x:nums){
            mask|=x;
        }
        return mask+1;
    }
};
