#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        string ans="";
        map<string,int>mp;
        for(auto&resp:responses){
            set<string>st(resp.begin(),resp.end());
            for(auto&word:st)mp[word]++;
        }
        int mx=0;
        for(auto&[word,cnt]:mp){
            if(cnt>mx){
                mx=cnt;
                ans=word;
            }
            else if(cnt==mx){
                ans=min(ans,word);
            }
        }
        return ans;
    }
};
