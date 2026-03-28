#include<bits/stdc++.h>
using namespace std;
class UnionFind{
    vector<int>parent;
public:
    UnionFind(int n){
        parent.resize(n);
        for(int i=0;i<n;i++)parent[i]=i;
    }
    int find(int i){
        if(parent[i]==i)return i;
        return parent[i]=find(parent[i]);
    }
    void unite(int i,int j){
        int a=find(i),b=find(j);
        if(a!=b)parent[a]=b;
    }
};
class Solution{
public:
    string findTheString(vector<vector<int>>& lcp){
        int n=lcp.size();
        UnionFind uf(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(lcp[i][j]>0) uf.unite(i,j);
            }
        }
        string ans(n,'a');
        unordered_map<int,char> mp;
        char c='a';
        for(int i=0;i<n;i++){
            int root=uf.find(i);
            if(mp.find(root)==mp.end()){
                if(c>'z') return "";
                mp[root]=c++;
            }
            ans[i]=mp[root];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int k=0;
                while(i+k<n&&j+k<n&&ans[i+k]==ans[j+k]) k++;
                if(lcp[i][j]!=k) return "";
            }
        }
        return ans;
    }
};
