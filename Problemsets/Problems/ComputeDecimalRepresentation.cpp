#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string s=to_string(n);
        int sz=s.size();
        vector<int>res;
        for(int i=sz-1;i>=0;i--){
            int d=s[i]-'0';
            if(d>0){
                res.push_back(d*pow(10,sz-i-1));
            }
        }
        return reverse(res.begin(),res.end()),res;
    }
};
