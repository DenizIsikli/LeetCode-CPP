 #include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
         sort(logs.begin(),logs.end(),[](auto&a,auto&b){return a[1]<b[1];});
         int m=queries.size();
         vector<int>idx(m);
         iota(idx.begin(),idx.end(),0);
         sort(idx.begin(),idx.end(),[&](int a,int b){return queries[a]<queries[b];});
         vector<int>fq(n+1,0),ans(m);
         int act=0,l=0,r=0,sz=logs.size();
         for(int i:idx){
             int lo=queries[i]-x,hi=queries[i];
             while(r<sz&&logs[r][1]<=hi){
                 if(fq[logs[r][0]]++==0)act++;
                 r++;
             }
             while(l<r&&logs[l][1]<lo){
                 if(--fq[logs[l][0]]==0)act--;
                 l++;
             }
             ans[i]=n-act;
         }
         return ans;
    }
};
