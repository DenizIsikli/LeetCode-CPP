#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPushes(std::string word) {
        vector<int>v(26,0);
        for(char&c:word)v[c-'a']++;
        sort(v.begin(),v.end(),greater<int>());
        int ans=0,idx=0;
        while(idx<26&&v[idx]>0){
            int mult=idx/8+1;
            ans+=v[idx]*mult;
            idx++;
        }
        return ans;
    }
};
