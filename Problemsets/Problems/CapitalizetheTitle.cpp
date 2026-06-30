#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string ans="";
        while(ss>>word){
            if(word.size()<=2){
                transform(word.begin(),word.end(),word.begin(),::tolower);
            }else{
                transform(word.begin(),word.end(),word.begin(),::tolower);
                word[0]=toupper(word[0]);
            }
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};
