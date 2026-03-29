#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void backtrack(string s,vector<string>&ans,set<string>&seen){
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                string tmp=s;
                tmp[i]^=32;
                if(seen.find(tmp)==seen.end()){
                    ans.push_back(tmp);
                    seen.insert(tmp);
                    backtrack(tmp,ans,seen);
                }
            }
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string>ans={s};
        set<string>seen={s};
        backtrack(s,ans,seen);
        return ans;
    }
};
