#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>cnt;
        for(auto&dm:cpdomains){
            int i=0;
            string dom="";
            while(dm[i]!=' '){
                dom+=dm[i];
                i++;
            }
            int num=stoi(dom);
            i++;
            dom="";
            while(i<dm.size()){
                dom+=dm[i];
                i++;
            }
            cnt[dom]+=num;
            for(int i=0;i<dom.size();i++){
                if(dom[i]=='.'){
                    string subdom=dom.substr(i+1);
                    cnt[subdom]+=num;
                }
            }
        }
        vector<string>ans;
        for(auto&[k,v]:cnt){
            ans.push_back(to_string(v)+" "+k);
        }
        return ans;
    }
};
