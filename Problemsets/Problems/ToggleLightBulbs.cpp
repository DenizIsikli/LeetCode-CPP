#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>fq;
        for(auto&x:bulbs)fq[x]++;
        vector<int>ans;
        for(auto[k,v]:fq){
            if(v&1)ans.push_back(k);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
