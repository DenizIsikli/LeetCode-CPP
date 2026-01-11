#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string>vis;
        queue<string>q;
        string mn=s;
        q.push(mn);
        vis.insert(mn);
        while(!q.empty()){
            string cur=q.front();q.pop();
            mn=min(mn,cur);
            string add=cur;
            for(int i=1;i<add.size();i+=2){
                add[i]=((add[i]-'0'+a)%10)+'0';
            }
            if(!vis.count(add)){
                vis.insert(add);
                q.push(add);
            }
            string rot=cur.substr(cur.size()-b)+cur.substr(0,cur.size()-b);
            if(!vis.count(rot)){
                vis.insert(rot);
                q.push(rot);
            }
        }
        return mn;
    }
};
