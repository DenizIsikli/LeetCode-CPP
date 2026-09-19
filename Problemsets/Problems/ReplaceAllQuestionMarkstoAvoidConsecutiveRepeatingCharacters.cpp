#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string modifyString(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                char l=i>0?s[i-1]:' ';
                char r=i+1<n?s[i+1]:' ';
                s[i]=(l!='a'&&r!='a')?'a':(l!='b'&&r!='b')?'b':'c';
            }
        }
        return s;
    }
};
