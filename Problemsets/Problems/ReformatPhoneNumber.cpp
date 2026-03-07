#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformatNumber(string number) {
        vector<int>dig;
        for(char&c:number){
            if(isdigit(c))dig.push_back(c-'0');
        }
        if(dig.size()<=3){
            string ans="";
            for(int i:dig)ans+=i+'0';
            return ans;
        }
        int rem=dig.size()%3;
        int n=dig.size()/3;
        int og=dig.size();
        string ans="";
        reverse(dig.begin(),dig.end());
        if(rem==1)n--;
        int cnt=0;
        for(int i=0;i<n*3;i++){
            ans+=dig.back()+'0';
            dig.pop_back();
            cnt++;
            if(cnt%3==0&&i!=n*3-1)ans+='-';
        }
        int remsz=dig.size();
        if(remsz!=og){
            if(!dig.empty())ans+='-';
        }
        for(int i=0;i<remsz;i++){
            ans+=dig.back()+'0';
            dig.pop_back();
            if(remsz==4&&i==1)ans+='-';
        }
        return ans;
    }
};
