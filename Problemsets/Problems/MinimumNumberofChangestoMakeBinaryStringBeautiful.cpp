#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minChanges(std::string s) {
        int ans=0;
        for(int i=1;i<s.size();i+=2){
            if(s[i]!=s[i-1])ans++;
        }
        return ans;
    }
};
