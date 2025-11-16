#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool f(unordered_map<char,int>&mp,unordered_map<char,int>&tmp){
        for(auto&[k,v]:tmp){
            if(v!=mp[k]){
                return false;
            }
        }
        return true;
    }

    vector<int> partitionLabels(string s) {
        vector<int>res;
        int cnt=0;
        unordered_map<char,int>mp;
        unordered_map<char,int>tmp;
        for(int i=0;i<s.size();i++)mp[s[i]-'a']++;
        for(int i=0;i<s.size();i++){
            tmp[s[i]-'a']++;
            cnt++;
            if(f(mp,tmp)){res.push_back(cnt);tmp.clear();cnt=0;}
        }
        return res;
    }
};
