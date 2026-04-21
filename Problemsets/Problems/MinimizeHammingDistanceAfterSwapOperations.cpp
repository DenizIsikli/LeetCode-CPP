#include<bits/stdc++.h>
using namespace std;
class UnionFind {
    vector<int> parent;
    int components;
public:
    UnionFind(int size) {
        parent.resize(size);
        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }
        components = size;
    }
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        return find(parent[i]);
    }
    void unite(int i, int j) {
        int irep = find(i);
        int jrep = find(j);
        parent[irep] = jrep;
    }
};
class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n=source.size();
        UnionFind uf(n);
        for(auto&sw:allowedSwaps){
            uf.unite(sw[0],sw[1]);
        }
        unordered_map<int,vector<int>>grps;
        for(int i=0;i<n;i++){
            grps[uf.find(i)].push_back(i);
        }
        int ans=0;
        for(auto&[_,grp]:grps){
            unordered_map<int,int>fq;
            for(auto&i:grp){
                fq[source[i]]++;
            }
            for(auto&i:grp){
                if(fq[target[i]]>0){
                    fq[target[i]]--;
                }else ans++;
            }
        }
        return ans;
    }
};
