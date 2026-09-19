#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans;
        for(int l=0,r=number.size();l<r;l++,r--){
            if(number[l]==digit){
                string sub=number.substr(0,l)+number.substr(l+1);
                ans=max(ans,sub);
            }
            if(number[r-1]==digit){
                string sub=number.substr(0,r-1)+number.substr(r);
                ans=max(ans,sub);
            }
        }
        return ans;
    }
};
