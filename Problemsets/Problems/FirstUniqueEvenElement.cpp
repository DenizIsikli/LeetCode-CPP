#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        for(auto&x:nums){
            if(fq[x]==1&&x%2==0)return x;
        }
        return -1;
    }
};
