#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        int l=0,r=0;
        vector<int>fq(26,0);
        for(int i=0;i<s.size();i++){
            fq.clear();
            for(int j=i;j<s.size();j++){
                fq[s[j]-'a']++;
                int mn=INT_MAX,mx=INT_MIN;
                for(int i=0;i<26;i++){
                    if(fq[i]>0){
                        mn=min(mn,fq[i]);
                        mx=max(mx,fq[i]);
                    }
                }
                ans+=mx-mn;
            }
        }
        return ans;
    }
};
