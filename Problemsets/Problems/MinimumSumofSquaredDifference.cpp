#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size(),mx=INT_MIN;
        long long k=1LL*k1+k2;
        vector<int>diff(n);
        for(int i=0;i<n;i++)mx=max(mx,diff[i]=abs(nums1[i]-nums2[i]));
        vector<long long>freq(mx+1);
        for(int i=0;i<n;i++)freq[diff[i]]++;
        for(int i=mx;i>0&&k>0;i--){
            if(freq[i]==0)continue;
            long long take=min(k,(long long)freq[i]);
            freq[i]-=take;
            freq[i-1]+=take;
            k-=take;
        }
        long long ans=0;
        for(int i=0;i<=mx;i++)ans+=1LL*freq[i]*i*i;
        return ans;
    }
};
