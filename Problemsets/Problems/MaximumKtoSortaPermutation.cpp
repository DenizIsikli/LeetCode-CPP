#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int bt[17]={0};
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                for(int j=16;j>=0;j--){
                    if(nums[i]>>j&1){
                        bt[j]++;
                    }
                }
                cnt++;
            }
        }
        if(cnt==0)return 0;
        int k=0;
        for(int i=0;i<17;i++){
            if(bt[i]==cnt){
                k|=(1<<i);
            }
        }
        return k;
    }
};
