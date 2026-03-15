#include<bits/stdc++.h>
using namespace std;
class Fancy {
public:
    using ll=long long;
    vector<int>sq;
    const int MOD=1e9+7;
    ll ans=0,sum=0,mlt=1;
    ll pow(ll base,ll exp){
        ll x=1;
        base%=MOD;
        while(exp){
            if(exp&1)x=(x*base)%MOD;
            base=(base*base)%MOD;
            exp>>=1;
        }
        return x;
    }
    ll modInverse(ll mlt){
        return pow(mlt,MOD-2);
    }
    Fancy(){}
    void append(int val) {
        ll tmp=val;
        ll base=((tmp-sum+MOD)%MOD*modInverse(mlt))%MOD;
        sq.push_back(base);
    }
    void addAll(int inc) {
        sum=(sum+inc)%MOD;
    }
    void multAll(int m) {
        mlt=(mlt*m)%MOD;
        sum=(sum*m)%MOD;
    }
    int getIndex(int idx) {
        return(idx<sq.size())?(sq[idx]*mlt+sum)%MOD:-1;
    }
};
/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */
