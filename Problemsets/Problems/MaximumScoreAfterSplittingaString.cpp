#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        int ans=0,zero=0,one=count(s.begin(),s.end(),'1');
        for(int i=0;i<s.size()-1;i++){
            zero+=(s[i]=='0');
            one-=(s[i]=='1');
            ans=max(ans,zero+one);
        }
        return ans;
    }
};
