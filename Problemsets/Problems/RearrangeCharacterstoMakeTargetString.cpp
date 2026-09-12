#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>fq1,fq2;
        for(auto&c:s)fq1[c]++;
        for(auto&c:target)fq2[c]++;
        int ans=INT_MAX;
        for(int i=0;i<target.size();i++){
            int sz1=fq1[target[i]];
            int sz2=fq2[target[i]];
            ans=min(ans,sz1/sz2);
        }
        return ans;
    }
};
