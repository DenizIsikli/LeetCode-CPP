#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformat(string s) {
        vector<char>dig,let;
        for(char c:s){
            if(isdigit(c))dig.push_back(c);
            else let.push_back(c);
        }
        int n=dig.size(),m=let.size();
        if(abs(n-m)>1)return "";
        string ans="";
        if(dig.size()>let.size()){
            for(int i=0;i<let.size();i++){
                ans+=dig[i];
                ans+=let[i];
            }
            ans+=dig.back();
        }else if(let.size()>dig.size()){
            for(int i=0;i<dig.size();i++){
                ans+=let[i];
                ans+=dig[i];
            }
            ans+=let.back();
        }else{
            for(int i=0;i<dig.size();i++){
                ans+=dig[i];
                ans+=let[i];
            }
        }
        return ans;
    }
};
