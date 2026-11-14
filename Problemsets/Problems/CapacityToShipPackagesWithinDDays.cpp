#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mxw=INT_MIN,smw=0;
        for(auto&w:weights){
            mxw=max(mxw,w);
            smw+=w;
        }
        int l=mxw,r=smw;
        while(l<r){
            int m=l+(r-l)/2;
            int d=1,cur=0;
            for(auto&w:weights){
                if(cur+w>m){
                    d++;
                    cur=0;
                }
                cur=cur+w;
            }
            if(d>days)l=m+1;
            else r=m;
        }
        return l;
    }
};
