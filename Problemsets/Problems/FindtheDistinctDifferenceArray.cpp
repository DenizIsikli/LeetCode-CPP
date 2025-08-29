#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        unordered_map<int,int>pre,suf;
        for(auto&x:nums)suf[x]++;
        for(int i=0;i<n;i++){
            int x=nums[i];
            pre[x]++;
            suf[x]--;
            if(suf[x]==0)suf.erase(x);
            int totL=pre.size();
            int totR=suf.size();
            res[i]=totL-totR;
        }
        return res;
    }
};
