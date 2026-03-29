#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<int,int>mp;
        mp[0]=-1;
        int mask=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                mask^=(1<<((int)(s[i]-'a')));
            }
            if(mp.count(mask)){
                ans=max(ans,i-mp[mask]);
            }else{
                mp[mask]=i;
            }
        }
        return ans;
    }
};
