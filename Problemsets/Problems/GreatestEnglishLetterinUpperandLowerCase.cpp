#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>st(s.begin(),s.end());
        for(char c='Z';c>='A';c--){
            if(st.count(c)&&st.count(tolower(c)))return string(1,c);
        }
        return "";
    }
};
