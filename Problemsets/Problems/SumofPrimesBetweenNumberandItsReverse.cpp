#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfPrimesInRange(int n) {
        auto isPrime=[&](int x){
            if(x<2)return false;
            for(int i=2;i*i<=x;++i){
                if(x%i==0)return false;
            }
            return true;
        };
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int m=stoi(s);
        int res=0;
        for(int i=min(n,m);i<=max(n,m);++i){
            if(isPrime(i))res+=i;
        }
        return res;
    }
};
