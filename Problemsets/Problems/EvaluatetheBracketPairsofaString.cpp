#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto&kv:knowledge)mp[kv[0]]=kv[1];
        string res,key;
        bool f=false;
        for(char&c:s){
            if(c=='('){
                f=true;key.clear();
            }else if(c==')'){
                f=false;
                auto it=mp.find(key);
                res+=(it==mp.end()?"?":it->second);
            }
            else if(f)key+=c;
            else res+=c;
        }
        return res;
    }
};
