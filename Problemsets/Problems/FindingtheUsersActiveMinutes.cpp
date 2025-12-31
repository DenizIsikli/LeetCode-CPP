#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>fq;
        vector<int>res(k,0);
        for(auto&log:logs){
            fq[log[0]].insert(log[1]);
        }
        for(auto&p:fq){
            res[p.second.size()-1]++;
        }
        return res;
    }
};
