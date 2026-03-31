#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string answerString(string word, int numFriends) {
        string ans="";
        for(int i=0;i<word.size();i++){
            for(int j=i;j<word.size();j++){
                int len=j-i+1;
                int rem=word.size()-len;
                if(rem>=numFriends-1){
                    ans=max(ans,word.substr(i,len));
                }
            }
        }
        return ans;
    }
};
