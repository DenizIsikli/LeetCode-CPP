#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>fq(26,0);
        for(auto&c:s)fq[c-'a']++;
        int n=s.size();
        string ans(n,' ');
        int l=0,r=n-1;
        for(int i=0;i<26;i++){
            while(fq[i]>=2){
                ans[l++]=i+'a';
                ans[r--]=i+'a';
                fq[i]-=2;
            }
            if(fq[i]==1){
                ans[n/2]=i+'a';
            }
        }
        return ans;
    }
};
