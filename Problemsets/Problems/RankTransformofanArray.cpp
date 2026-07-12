#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) {
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        vector<int>res(arr.size());
        int rank=1;
        for(auto&it:mp){
            for(auto&x:it.second){
                res[x]=rank;
            }
            rank++;
        }
        return res;
    }
};
