#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string tmp="";
        int i=0;
        while(i<s.size()){
            if(tmp.empty()||s[i]!=tmp.back())tmp.push_back(s[i]);
            else{tmp.pop_back();}
            i++;
        }
        return tmp;
    }
};
