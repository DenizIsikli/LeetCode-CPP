#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        auto isPrime=[](int n) -> bool {
            if(n<2)return false;
            for(int i=2;i*i<=n;++i){
                if(n%i==0)return false;
            }
            return true;
        };
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        for(auto&[k,v]:fq){
            if(isPrime(v))return true;
        }
        return false;
    }
};
