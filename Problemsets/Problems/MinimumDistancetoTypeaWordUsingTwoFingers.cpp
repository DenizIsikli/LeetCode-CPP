#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dist(int a,int b){
        return abs(a/6-b/6)+abs(a%6-b%6);
    }
    int minimumDistance(string word) {
        int n=word.size(),dp[300][26][26];
        for(int i=0;i<n;i++){
            int t=word[i]-'A';
            for(int j=0;j<26;j++){
                for(int k=0;k<26;k++){
                    dp[i+1][j][k]=1e9;
                }
            }
            for(int j=0;j<26;j++){
                for(int k=0;k<26;k++){
                    dp[i+1][j][t]=min(dp[i+1][j][t],dp[i][j][k]+dist(k,t));
                    dp[i+1][t][k]=min(dp[i+1][t][k],dp[i][j][k]+dist(j,t));
                }
            }
        }
        int ans=INT_MAX;
        for(int j=0;j<26;j++){
            for(int k=0;k<26;k++){
                ans=min(ans,dp[n][j][k]);
            }
        }
        return ans;
    }
};
