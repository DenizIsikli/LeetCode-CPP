#include<bits/stdc++.h>
using namespace std;
class DisjointSets{
public:
    vector<int>parents;
    vector<int>sizes;
    int components;
    DisjointSets(int size):parents(size),sizes(size,1){
        for(int i=0;i<size;i++)parents[i]=i;
        components=size;

    }
    int find(int x){return parents[x]==x?x:(parents[x]=find(parents[x]));}
    bool merge(int x,int y){
        int x_root=find(x);
        int y_root=find(y);
        if(x_root==y_root)return false;
        components--;
        if(sizes[x_root]<sizes[y_root])swap(x_root,y_root);
        sizes[x_root]+=sizes[y_root];
        parents[y_root]=x_root;
        return true;
    }
    bool connected(int x,int y){return find(x)==find(y);}
};
class Solution {
public:
    int maxStability(int n, vector<vector<int>>& edges, int k) {
        int ans=INT_MAX;
        vector<pair<int,pair<int,int>>>edge;
        DisjointSets dsu(n);
        for(auto&e:edges){
            if(e[3]==0){
                edge.push_back({e[2],{e[0],e[1]}});
                continue;
            }
            if(dsu.connected(e[0],e[1]))return -1;
            dsu.merge(e[0],e[1]);
            ans=min(ans,e[2]);
        }
        sort(edge.begin(),edge.end(),greater<pair<int,pair<int,int>>>());
        vector<int>vals;
        for(auto&[w,e]:edge){
            if(dsu.connected(e.first,e.second))continue;
            dsu.merge(e.first,e.second);
            vals.push_back(w);
        }
        if(dsu.components>1)return -1;
        sort(vals.begin(),vals.end());
        for(int i=0;i<min(k,(int)vals.size());i++)vals[i]*=2;
        return min(ans,vals.empty()?INT_MAX:*min_element(vals.begin(),vals.end()));
    }
};
