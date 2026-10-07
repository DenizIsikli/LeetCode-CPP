#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string>res;
        unordered_set<string>vis;
        queue<string>q;
        q.push(s);
        vis.insert(s);
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                string str=q.front();q.pop();
                char chk=valid(str);
                if(chk==1)res.push_back(str);
                if(res.size())continue;
                for(int j=0;j<str.size();j++){
                    if(str[j]!=chk)continue;
                    if(j>0&&str[j]==str[j-1])continue;
                    string tmp=str.substr(0,j)+str.substr(j+1);
                    if(vis.find(tmp)==vis.end()){
                        vis.insert(tmp);
                        q.push(tmp);
                    }
                }
            }
            if(res.size())break;
        }
        return res;
    }
    char valid(string&s){
        int cnt=0;
        for(char c:s){
            if(c=='(')cnt++;
            else if(c==')'){
                if(cnt>0)cnt--;
                else return ')';
            }
        }
        return (cnt==0?1:'(');
    }
};
