#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long l=1,r=1e16;
        long long ans=r;
        while(l<=r){
            long long mid=(l+r)/2;
            long long tot=0;
            for(auto&wt:workerTimes){
                long long val=(2*mid)/wt;
                long long x=(sqrt(1+4*val)-1)/2;
                tot+=x;
                if(tot>=mountainHeight)break;
            }
            if(tot>=mountainHeight){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
