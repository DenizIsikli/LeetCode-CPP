#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int fq[26]={};
        for(char c:s)fq[c-'a']++;
        int unique[101]={},mx=1;
        for(int i=0;i<26;i++){
            if(fq[i]==0)continue;
            if(++unique[fq[i]]>unique[mx]||(unique[fq[i]]==unique[mx]&&fq[i]>mx))mx=fq[i];
        }
        string res="";
        for(int i=0;i<26;i++){
            if(fq[i]==mx)res+=char(i+'a');
        }
        return res;
    }
};
