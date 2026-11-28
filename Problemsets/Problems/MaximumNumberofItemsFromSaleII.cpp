#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        int mx=INT_MIN;
        for(auto&it:items)mx=max(mx,it[0]);
        vector<int>fq(mx+1,0);
        for(auto&it:items)fq[it[0]]++;
        vector<int>mult(mx+1,0);
        for(int f=1;f<=mx;f++){
            if(!fq[f])continue;
            for(int m=f;m<=mx;m+=f)mult[f]+=fq[m];
        }
        vector<int>cnt(n);
        for(int i=0;i<n;i++){
            cnt[i]=mult[items[i][0]]-1;
        }
        long long mn=INT_MAX;
        for(auto&it:items)mn=min(mn,(long long)it[1]);
        vector<pair<long long,long long>>deals;
        for(int i=0;i<n;i++){
            if(cnt[i]>0)deals.push_back({items[i][1],cnt[i]});
        }
        sort(deals.begin(),deals.end());
        long long B=budget,spent=0,take=0;
        long long ans=B/mn;
        for(auto&[c,v]:deals){
            long long k=min(v,(B-spent)/c);
            spent+=k*c;
            take+=k;
            ans=max(ans,2*take+(B-spent)/mn);
            if(take<v)break;
        }
        return ans;
    }
};
