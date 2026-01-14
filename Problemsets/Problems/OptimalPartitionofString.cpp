#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int partitionString(string s) {
        int res=0;
        unordered_map<char,bool>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                res++;
                mp.clear();
            }
            mp[s[i]]=true;
        }
        return res+1;
    }
};
