#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>fq;
            for(int j=i;j<s.size();j++){
                fq[s[j]]++;
                int freq=fq.begin()->second;
                bool f=true;
                for(auto&[k,v]:fq){
                    if(v!=freq){
                        f=false;
                        break;
                    }
                }
                if(f)ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};
