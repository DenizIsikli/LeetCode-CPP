#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string, vector<string>> mp = {
            {"electronics", {}},
            {"grocery", {}},
            {"pharmacy", {}},
            {"restaurant", {}}
        };
        for(int i=0;i<code.size();i++){
            if(!isActive[i])continue;
            if(code[i].empty())continue;
            bool valid=true;
            for(auto&c:code[i]){
                if(!isalnum(static_cast<unsigned char>(c))&&c!='_'){
                    valid=false;
                    break;
                }
            }
            if(!valid)continue;
            if(!mp.count(businessLine[i]))continue;
            mp[businessLine[i]].push_back(code[i]);
        }
        vector<string>res;
        vector<string>order={"electronics", "grocery", "pharmacy", "restaurant"};
        for(const string&bl:order){
            auto&vec=mp[bl];
            sort(vec.begin(),vec.end());
            res.insert(res.end(),vec.begin(),vec.end());
        }
        return res;
    }
};
