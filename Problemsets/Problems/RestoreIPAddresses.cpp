#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string segment){
        if(segment.size()>3||segment.size()==0)return false;
        if(segment.size()>1&&segment[0]=='0')return false;
        if(segment.size()&&stoi(segment)>255)return false;
        return true;
    }
    void solve(vector<string>&ans,string tmp,string s,int idx,int dots){
        if(dots==3){
            if(isValid(s.substr(idx))){
                ans.push_back(tmp+s.substr(idx));
            }
            return;
        }
        int sz=s.size();
        for(int i=idx;i<min(idx+3,sz);i++){
            if(isValid(s.substr(idx,i-idx+1))){
                tmp.push_back(s[i]);
                tmp.push_back('.');
                solve(ans,tmp,s,i+1,dots+1);
                tmp.pop_back();
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        string tmp;
        solve(ans,tmp,s,0,0);
        return ans;
    }
};
