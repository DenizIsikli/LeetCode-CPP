#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int a=nums[i],mn=nums[i];
            for(int j=i;j<n;j++){
                a&=nums[j];
                mn=min(mn,nums[j]);
                if(a==mn)ans++;
            }
        }
        return ans;
    }
};
