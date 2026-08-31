#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>fq(26,0),fq1(26,0);
        for(auto&c:word1)fq[c-'a']++;
        for(auto&c:word2)fq1[c-'a']++;
        int diff=0;
        for(int i=0;i<26;i++){
            if(abs(fq[i]-fq1[i])>3)return false;
        }
        return true;
    }
};
