#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int>rnkcnt;
        unordered_map<char,int>suitcnt;
        for(int i=0;i<5;i++){
            rnkcnt[ranks[i]]++;
            suitcnt[suits[i]]++;
        }
        for(auto&it:suits){
            if(suitcnt[it]>4)return "Flush";
        }
        for(auto&it:rnkcnt){
            if(it.second>2)return "Three of a Kind";
        }
        for(auto&it:rnkcnt){
            if(it.second>1)return "Pair";
        }
        return "High Card";
    }
};
