#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string trimTrailingVowels(string s) {
        vector<char>vowels={'a','e','i','o','u'};
        int n=s.size();
        int i=n-1;
        while(i>=0&&find(vowels.begin(),vowels.end(),s[i])!=vowels.end()){i--;}
        return s.substr(0,i+1);
    }
};
