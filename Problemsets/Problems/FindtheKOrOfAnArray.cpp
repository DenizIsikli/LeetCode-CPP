#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        unordered_map<int,int>fq;
        for(auto&x:nums){
            bitset<32>bs(x);
            for(int i=0;i<32;i++){
                if(bs[i]==1)fq[i]++;
            }
        }
        bitset<32>bs;
        for(auto&[pos,cnt]:fq){
            if(cnt>=k)bs.set(pos);
        }
        int res=static_cast<int>(bs.to_ullong());
        return res;
    }
};
