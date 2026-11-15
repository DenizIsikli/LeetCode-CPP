#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod=1e9+7;
        long long odd=0;
        int parity=0;
        for(int x:arr){
            parity^=x&1;
            odd+=parity;
        }
        long long even=(arr.size()+1)-odd;
        return (odd*even)%mod;
    }
};
