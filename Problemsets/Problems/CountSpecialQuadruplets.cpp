#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>fq;
        for(int i=0;i<n;i++){
            int k=i-1;
            for(int j=0;j<k;j++){
                for(int l=j+1;l<k;l++){
                    fq[nums[l]+nums[j]+nums[k]]++;
                }
            }
            if(fq.count(nums[i]))ans+=fq[nums[i]];
        }
        return ans;
    }
};
