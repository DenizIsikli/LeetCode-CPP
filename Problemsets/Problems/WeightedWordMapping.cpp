#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0;i<words.size();i++){
            int sm=0;
            for(char&c:words[i]){
                sm+=weights[c-'a'];
            }
            sm%=26;
            ans+='a'+26-sm-1;
        }
        return ans;
    }
};
