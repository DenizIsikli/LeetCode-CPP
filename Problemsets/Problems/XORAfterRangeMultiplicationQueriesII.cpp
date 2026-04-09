#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int mod=1e9+7;
    long long modPow(long long base, long long exp){
        long long res=1;
        while(exp>0){
            if(exp&1)res=(res*base)%mod;
            base=(base*base)%mod;
            exp>>=1;
        }
        return res;
    }
    long long modInv(long long x){
        return modPow(x,mod-2);
    }
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int B=sqrt(n)+1;
        unordered_map<int, vector<vector<int>>>lazy;
        for(auto&q:queries){
            int li=q[0],ri=q[1],ki=q[2],vi=q[3];
            if(ki<B){
                lazy[ki].push_back(q);
            }else{
                for(int i=li;i<=ri;i+=ki){
                    nums[i]=(1LL*nums[i]*vi)%mod;
                }
            }
        }
        for(auto&[k,query]:lazy){
            vector<long long>diff(n,1);
            for(auto&q:query){
                int l=q[0],r=q[1],v=q[3];
                diff[l]=(diff[l]*v)%mod;
                int steps=(r-l)/k;
                int nextPos=l+(steps+1)*k;
                if(nextPos<n)diff[nextPos]=(diff[nextPos]*modInv(v))%mod;
            }
            for(int i=0;i<n;i++){
                if(i>=k)diff[i]=(diff[i]*diff[i-k])%mod;
                nums[i]=(1LL*nums[i]*diff[i])%mod;
            }
        }
        int ans=0;
        for(int&x:nums)ans^=x;
        return ans;
    }
};
