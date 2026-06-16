#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMatchingIndex(string s) {
        bool f=s.size()%2;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]==s[s.size()-1-i])return i;
        }
        if(f)return s.size()/2;
        return -1;
    }
};
