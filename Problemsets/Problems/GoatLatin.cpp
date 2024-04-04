#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string>words;
        stringstream ss(sentence);
        string word;
        while(ss>>word)words.push_back(word);
        string vowels="aeiouAEIOU";
        int cnt=1;
        for(auto&w:words){
            if(vowels.find(w[0])==string::npos){
                char first=w[0];
                w.erase(w.begin());
                w.push_back(first);
            }
            w+="ma";
            w+=string(cnt,'a');
            cnt++;
        }
        string res;
        for(auto&w:words)res+=w+" ";
        res.pop_back();
        return res;
    }
};
