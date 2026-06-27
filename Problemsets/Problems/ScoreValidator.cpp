#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int sc=0,cnt=0;
        for(auto&ev:events){
            if(cnt>=10)break;
            if(isdigit(ev[0]))sc+=stoi(ev);
            else if(ev=="W")cnt++;
            else sc++;
        }
        return {sc,cnt};
    }
};
