#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        int res=n+1,sum=0,l=0;
        vector<int>dp(n+1,n);
        for(int r=0;r<n;r++){
            sum+=arr[r];
            while(sum>target)sum-=arr[l++];
            dp[r+1]=dp[r];
            if(sum==target){
                res=min(res,r-l+1+dp[l]);
                dp[r+1]=min(dp[r],r-l+1);
            }
        }
        return res==n+1?-1:res;
    }
};
