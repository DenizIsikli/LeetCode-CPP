#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>res;
        for(auto&query:queries){
            for(auto&word:dictionary){
                int cnt=0;
                for(int i=0;i<query.size();i++){
                    cnt+=(query[i]!=word[i]);
                    if(cnt>2)break;
                }
                if(cnt<=2){res.push_back(query);break;}
            }
        }
        return res;
    }
};
