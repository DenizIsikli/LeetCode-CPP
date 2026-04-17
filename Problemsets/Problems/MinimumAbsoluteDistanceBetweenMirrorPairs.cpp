#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int res=INT_MAX,idx=0;
        unordered_map<int,int>mp;
        for(int&x:nums){
            int k;
            if(mp.count(x))res=min(res,idx-mp[x]);
            for(k=0;x;x/=10)k=k*10+(x%10);
            mp[k]=idx++;
        }
        return (res==INT_MAX?-1:res);
    }
};
