#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,0));
        int tot=0;
        for(auto&c:s1)tot+=c;
        for(auto&c:s2)tot+=c;
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s2.size();j++){
                if(s1[i]==s2[j])dp[i+1][j+1]=dp[i][j]+s1[i];
                else{dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);}
            }
        }
        return tot-2*dp[s1.size()][s2.size()];
    }
};
