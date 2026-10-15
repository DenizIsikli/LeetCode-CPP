#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        bitset<101>bs;
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            bs.reset();
            int cnt=0;
            for(int j=i;j<n;j++){
                int x=nums[j];
                cnt+=(bs[x]==0);
                bs[x]=1;
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};
