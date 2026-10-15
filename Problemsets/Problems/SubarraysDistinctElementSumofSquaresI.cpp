#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<nums.size();i++){
            set<int>fq;
            for(int j=i;j<n;j++){
                fq.insert(nums[j]);
                res+=fq.size()*fq.size();
            }
        }
        return res;
    }
};
