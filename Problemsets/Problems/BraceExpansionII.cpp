#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    set<string>res;
    void dfs(string s){
        int r=s.find('}');
        if(r==string::npos){res.insert(s);return;}
        int l=s.rfind('{',r);
        string left=s.substr(0,l);
        string right=s.substr(r+1);
        string in=s.substr(l+1,r-l-1);
        string part;
        stringstream ss(in);
        while(getline(ss,part,',')){
            dfs(left+part+right);
        }
    }
    vector<string> braceExpansionII(string expression) {
        dfs(expression);
        return vector<string>(res.begin(),res.end());
    }
};
