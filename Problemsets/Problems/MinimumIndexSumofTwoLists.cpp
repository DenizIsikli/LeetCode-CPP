#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>fq;
        vector<pair<string,int>>v;
        for(int i=0;i<list1.size();i++)fq[list1[i]]=i;
        for(int i=0;i<list2.size();i++){
            if(fq.find(list2[i])!=fq.end()){
                v.push_back({list2[i],fq[list2[i]]+i});
            }
        }
        sort(v.begin(),v.end(),[&](pair<string,int>&a,pair<string,int>&b){
            return a.second<b.second;
        });
        int mn=v[0].second;
        vector<string>ans;
        for(int i=0;i<v.size();i++){
            if(v[i].second==mn)ans.push_back(v[i].first);
            else break;
        }
        return ans;
    }
};
