#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(j-i>=1){
                    string sub=s.substr(i,j-i+1);
                    if(rev.find(sub)!=string::npos){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
