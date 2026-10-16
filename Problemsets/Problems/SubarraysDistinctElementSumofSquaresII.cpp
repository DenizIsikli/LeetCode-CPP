#include<bits/stdc++.h>
using namespace std;
struct Fenwick {
    int n;
    vector<long long> t;
    Fenwick(int n) : n(n), t(n + 1, 0) {}
    void add(int i, long long v) { for (; i <= n; i += i & -i) t[i] += v; }
    long long sum(int i) { long long s = 0; for (; i > 0; i -= i & -i) s += t[i]; return s; }
};
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        const long long MOD=1e9+7;
        int n=nums.size();
        Fenwick b1(n+1),b2(n+1);
        auto rangeAdd=[&](int l,int r,long long v){
            b1.add(l,v);
            b1.add(r+1,-v);
            b2.add(l,v*l);
            b2.add(r+1,-v*(r+1));
        };
        auto prefix=[&](int x){return (x+1)*b1.sum(x)-b2.sum(x);};
        auto rangeSum=[&](int l,int r){return prefix(r)-prefix(l-1);};
        vector<int>last(100001,0);
        long long S=0,ans=0;
        for(int j=1;j<=n;j++){
            int x=nums[j-1],p=last[x];
            S=(S+2*(rangeSum(p+1,j)%MOD)+(j-p))%MOD;
            rangeAdd(p+1,j,1);
            ans=(ans+S)%MOD;
            last[x]=j;
        }
        return ans;
    }
};
