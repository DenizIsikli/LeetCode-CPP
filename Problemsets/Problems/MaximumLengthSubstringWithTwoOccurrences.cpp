#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>fq;
        int i=0,j=0,res=0;
        while(j<s.size()){
            fq[s[j]]++;
            while(fq[s[j]]>2){
                fq[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};
