#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words,string pattern) {
        auto getPattern=[&](string s){
            vector<int>a(s.size());
            unordered_map<char,int>mp;
            int idx=0;
            for(int i=0;i<s.size();i++){
                if(mp.find(s[i])==mp.end()){
                    mp[s[i]]=idx++;
                }
                a[i]=mp[s[i]];
            }
            return a;
        };
        vector<string>ans;
        for(auto&w:words){
            if(getPattern(w)==getPattern(pattern)){
                ans.push_back(w);
            }
        }
        return ans;
    }
};
