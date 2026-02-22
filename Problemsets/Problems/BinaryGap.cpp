#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binaryGap(int n) {
        bitset<32>bits(n);
        vector<int>ones;
        for(int i=0;i<32;i++){
            if(bits[i])ones.push_back(i);
        }
        int ans=0;
        for(int i=1;i<ones.size();i++){
            ans=max(ans,ones[i]-ones[i-1]);
        }
        return ans;
    }
};
