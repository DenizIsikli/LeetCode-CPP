#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0;
        int mod=1e9+7;
        for(int i=1;i<=n;i++){
            int bits=32-__builtin_clz(i);
            ans=((ans<<bits)+i)%mod;
        }
        return ans;
    }
};
