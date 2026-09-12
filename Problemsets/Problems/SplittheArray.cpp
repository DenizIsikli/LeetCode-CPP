#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto&c:nums)fq[c]++;
        for(auto&[k,v]:fq){
            if(v>2)return false;
        }
        return true;
    }
};
