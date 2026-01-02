#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>res;
        string tmp="";
        for(char c:target){
            tmp.push_back('a');
            res.push_back(tmp);
            while(tmp.back()!=c){
                tmp.back()=(tmp.back()=='z')?'a':tmp.back()+1;
                res.push_back(tmp);
            }
        }
        return res;
    }
};
