#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0,cost=0;
        deque<pair<int,int>>dq;
        for(int i=n-1,j=n-1;i>=0;i--){
            int x=nums[i];
            int cnt=1;
            while(!dq.empty()&&dq.back().first<x){
                auto[nxtNum,nxtCnt]=dq.back();
                dq.pop_back();
                cost+=1LL*(x-nxtNum)*nxtCnt;
                cnt+=nxtCnt;
            }
            dq.emplace_back(x,cnt);
            while(cost>k){
                auto[rightNum,rightCnt]=dq.front();
                dq.pop_front();
                cost-=1LL*(rightNum-nums[j]);
                j--;
                if(rightCnt>1){dq.emplace_front(rightNum,rightCnt-1);}
            }
            ans+=j-i+1;
        }
        return ans;
    }
};

// TLE Version
// class Solution {
// public:
//     long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
//         int n=nums.size();
//         long long ans=0;
//         int l=0,r=0;
//         auto possibleSubarray=[&](vector<int>&nums,int l,int r,int k){
//             int mx=0;
//             long long tmpk=k;
//             for(int i=l;i<=r;i++){
//                 mx=max(mx,nums[i]);
//                 tmpk-=mx-nums[i];
//                 if(tmpk<0)return false;
//             }
//             return true;
//         };
//         while(l<n){
//             while(r<n&&possibleSubarray(nums,l,r,k)){
//                 r++;
//             }
//             ans+=r-l;
//             l++;
//             if(l>r)r=l;
//         }
//         return ans;
//     }
// };
//
