#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>fq;
        for(auto&w:words){
            for(auto&c:w){
                fq[c]++;
            }
        }
        for(auto&[c,f]:fq){
            if(f%words.size()!=0)return false;
        }
        return true;
    }
};
