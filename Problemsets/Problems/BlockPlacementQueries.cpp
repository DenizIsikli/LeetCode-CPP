#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> getResults(vector<vector<int>>& queries) {
        vector<bool>ans;
        int n=queries.size();
        vector<int>bar;
        map<int,pair<int,int>>mp;
        set<pair<int,int>>st;
        bar.push_back(0);bar.push_back(50001);
        for(auto&q:queries)if(q[0]==1)bar.push_back(q[1]);
        sort(bar.begin(),bar.end());
        int sz=bar.size();
        mp[bar[0]]={bar[0],bar[1]};
        for(int i=1;i<sz-1;i++)mp[bar[i]]={bar[i-1],bar[i+1]};
        mp[bar[sz-1]]={bar[sz-2],0};
        for(int i=0;i<sz-1;i++)st.insert({bar[i+1]-bar[i],bar[i]});
        st.insert({0,bar[sz-1]});
        for(int i=n-1;i>=0;i--){
            if(queries[i][0]==1){
                int x=queries[i][1];
                int xL=mp[x].first;
                int xR=mp[x].second;
                st.erase({x-xL,xL});
                st.erase({xR-x,x});
                mp[xL].second=xR;
                mp[xR].first=xL;
                st.insert({xR-xL,xL});
            }else{
                int x=queries[i][1];
                int dist=queries[i][2];
                if(dist>x){ans.push_back(false);continue;}
                auto it=st.lower_bound({dist,0});
                bool can=false;
                for(it;it!=st.end();it++){
                    if(dist+it->second<=x){can=true;break;}
                }
                ans.push_back(can);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
