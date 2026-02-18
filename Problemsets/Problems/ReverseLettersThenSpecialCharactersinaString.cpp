#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseByType(string s) {
        vector<int>chIdx,spIdx;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]))chIdx.push_back(i);
            else spIdx.push_back(i);
        }
        for(int i=0;i<chIdx.size()/2;i++){
            swap(s[chIdx[i]],s[chIdx[chIdx.size()-1-i]]);
        }
        for(int i=0;i<spIdx.size()/2;i++){
            swap(s[spIdx[i]],s[spIdx[spIdx.size()-1-i]]);
        }
        return s;
    }
};
