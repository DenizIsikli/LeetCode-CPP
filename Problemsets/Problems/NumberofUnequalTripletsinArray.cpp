#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto&x:nums)fq[x]++;
        int cnt=0,prev=0,nxt=nums.size();

    }
};
