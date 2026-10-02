#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>res;
    string cur;
    void dfs(int o, int c){
        if(o==0&&c==0){
            res.push_back(cur);
            return;
        }
        if(o>0){
            cur.push_back('(');
            dfs(o-1,c);
            cur.pop_back();
        }
        if(c>o){
            cur.push_back(')');
            dfs(o,c-1);
            cur.pop_back();
        }
    }
    std::vector<std::string> generateParenthesis(int n) {
        dfs(n,n);
        return res;
    }
};
