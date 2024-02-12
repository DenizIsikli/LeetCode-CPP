#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>fq;
        while(n){
            int dig=n%10;
            fq[dig]++;
            n/=10;
        }
        int minFreq=INT_MAX;
        for(auto&[digit,freq]:fq){
            minFreq=min(minFreq,freq);
        }
        int res=10;
        for(auto&[digit,freq]:fq){
            if(freq==minFreq){
                res=min(res,digit);
            }
        }
        return res;
    }
};
