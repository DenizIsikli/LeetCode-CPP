#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto&x:nums)mp[x]++;
        int pr=0,lf=0;
        vector<int>a(2);
        for(auto&[k,v]:mp){
            pr+=v/2;
            lf+=v%2;
        }
        a[0]=pr,a[1]=lf;
        return a;
    }
};
