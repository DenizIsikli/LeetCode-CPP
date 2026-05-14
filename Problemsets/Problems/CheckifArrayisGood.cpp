#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0)return false;
        int fq[201]={0};
        for(auto&x:nums){
            if(++fq[x]==2){
                if(x!=n)return false;
            }
        }
        for(int i=1;i<=n-1;i++){
            if(fq[i]!=1)return false;
        }
        return fq[n]==2;
    }
};
