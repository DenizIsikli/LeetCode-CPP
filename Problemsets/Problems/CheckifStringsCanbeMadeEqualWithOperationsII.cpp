#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int>evenS1,oddS1,evenS2,oddS2;
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                evenS1[s1[i]]++;
                evenS2[s2[i]]++;
            }else{
                oddS1[s1[i]]++;
                oddS2[s2[i]]++;
            }
        }
        for(auto it:evenS1){
            if(it.second!=evenS2[it.first]) return false;
        }
        for(auto it:oddS1){
            if(it.second!=oddS2[it.first]) return false;
        }
        return true;
    }
};
