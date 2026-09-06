#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numPrimeArrangements(int n) {
        const int MOD=1e9+7;
        auto isPrime=[&](int x){
            for(int i=2;i*i<=x;i++){
                if(x%i==0)return false;
            }
            return true;
        };
        auto fact=[&](int x){
            long long f=1;
            for(int i=1;i<=x;i++){
                f=(f*i)%MOD;
            }
            return f;
        };
        int prime=0;
        for(int i=2;i<=n;i++)if(isPrime(i))prime++;
        int tot=fact(prime)*fact(n-prime)%MOD;
        return tot;
    }
};
