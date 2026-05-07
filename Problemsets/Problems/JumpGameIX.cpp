#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n),suf(n);
        pre[0]=nums[0],suf[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            int x=nums[i],y=nums[n-1-i];
            pre[i]=max(pre[i-1],x);
            suf[n-1-i]=min(suf[n-i],y);
        }
        vector<int>ans(n);
        ans[n-1]=pre[n-1];
        for(int i=n-2;i>=0;i--){
            if(pre[i]>suf[i+1])ans[i]=ans[i+1];
            else ans[i]=pre[i];
        }
        return ans;
    }
};
