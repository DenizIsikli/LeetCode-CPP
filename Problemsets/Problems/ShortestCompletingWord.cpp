#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int fq[26]={0};
        for(char&c:licensePlate){
            if(isalpha(c)){
                fq[tolower(c)-'a']++;
            }
        }
        string ans="";
        for(auto&w:words){
            int fq2[26]={0};
            for(char&c:w)fq2[tolower(c)-'a']++;
            bool ok=true;
            for(int i=0;i<26;i++){
                if(fq[i]>fq2[i]){
                    ok=false;
                    break;
                }
            }
            if(ok&&(ans==""||w.size()<ans.size())){
                ans=w;
            }
        }
        return ans;
    }
};
