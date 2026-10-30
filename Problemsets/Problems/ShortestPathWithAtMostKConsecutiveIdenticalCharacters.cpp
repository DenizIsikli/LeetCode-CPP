#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto&e:edges){
            adj[e[0]].emplace_back(e[1],e[2]);
        }
        vector<int>b(n,k+1);
        using State=tuple<long long,int,int>;
        priority_queue<State,vector<State>,greater<>>heap;
        heap.emplace(0,1,0);
        while(!heap.empty()){
            auto[weight,chars,node]=heap.top();
            heap.pop();
            if(chars>=b[node])continue;
            if(node==n-1)return weight;
            b[node]=chars;
            for(auto&[n,w]:adj[node]){
                int newRun=labels[node]==labels[n]?chars+1:1;
                if(newRun<b[n])heap.emplace(weight+w,newRun,n);
            }
        }
        return -1;
    }
};
