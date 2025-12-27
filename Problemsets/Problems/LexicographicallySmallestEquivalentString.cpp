#include <bits/stdc++.h>

using namespace std;

class UnionFind {
    vector<int>root;
public:
    UnionFind(int n):root(n){iota(root.begin(), root.end(), 0);}
    int Find(int x){return(x==root[x])?x:root[x]=Find(root[x]);}
    void Union(int x, int y){
        x=Find(x),y=Find(y);
        if(x==y)return;
        if(x<y)root[y]=x;
        else root[x]=y;
    }
};

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        UnionFind G(26);
        for(int i=0;i<s1.size();i++){
            G.Union(s1[i]-'a',s2[i]-'a');
        }
        string ans(baseStr.size(),' ');
        for(int i=0;i<baseStr.size();i++){
            ans[i]='a'+G.Find(baseStr[i]-'a');
        }
        return ans;
    }
};
