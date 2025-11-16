#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        vector<int>tw;
        for(auto&[k,v]:fq){if(v==2)tw.push_back(k);}
        int ans=0;
        for(auto&x:tw)ans^=x;
        return ans;
    }
};
