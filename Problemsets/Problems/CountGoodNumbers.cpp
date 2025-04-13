const int mod = 1e9 + 7;

long long power (long long base, long long exp) {
    long long res = 1;
    while (exp) {
        if (exp%2==1) res = (res*base)%mod;
        base = (base*base)%mod;
        exp/=2;
    }
    return res;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;
        long long res = (power(5, even) * power(4, odd)) % mod;
        return res;
    }
};
