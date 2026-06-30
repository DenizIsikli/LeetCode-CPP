#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int v[3]={0,0,0};
        int res=0,l=0;
        for(int r=0;r<s.size();r++){
            v[s[r]-'a']++;
            while(v[0]&&v[1]&&v[2]){
                res+=s.size()-r;
                v[s[l]-'a']--;
                l++;
            }
        }
        return res;
    }
};
