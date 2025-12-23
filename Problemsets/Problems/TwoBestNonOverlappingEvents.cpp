#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int mx=INT_MIN;
        sort(events.begin(),events.end(),[](const vector<int>& a,const vector<int>& b){
            return a[0]<b[0];
        });
        int n=events.size();
        vector<int> dp(n,0);
        for(int i=n-1;i>=0;--i){
            mx=max(mx,events[i][2]);
            dp[i]=mx;
        }
        int res=0;
        for(int i=0;i<n;++i){
            int end=events[i][1];
            int val=events[i][2];
            int l=i+1,r=n-1,idx=n;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(events[mid][0]>end){
                    idx=mid;
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
            if(idx<n){
                res=max(res,val+dp[idx]);
            }else{
                res=max(res,val);
            }
        }
        return res;
    }
};
