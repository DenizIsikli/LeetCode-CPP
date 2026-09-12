#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,int> mp;
        for(auto word:words){
            vector<int>diff;
            for(int i=1;i<word.size();i++){
                diff.push_back(word[i]-word[i-1]);
            }
            mp[diff]++;
        }
        string ans;
        for(auto&word:words){
            vector<int>diff;
            for(int i=1;i<word.size();i++){
                diff.push_back(word[i]-word[i-1]);
            }
            if(mp[diff]==1){
                ans=word;
                break;
            }
        }
        return ans;
    }
};
