#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkOnesSegment(string s) {
        vector<int>idx;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')idx.push_back(i);
        }
        for(int i=0;i<idx.size()-1;i++){
            if(idx[i+1]-idx[i]>1)return false;
        }
        return true;
    }
};
