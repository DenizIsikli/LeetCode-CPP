#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        vector<int>order(n);
        iota(order.begin(),order.end(),0);
        sort(order.begin(),order.end(),
            [&](int a, int b){return positions[a]<positions[b];});
        vector<int>st;
        for(auto&idx:order){
            if(directions[idx]=='R')st.push_back(idx);
            else{
                while(!st.empty()){
                    int top=st.back();
                    if(healths[top]<healths[idx]){
                        healths[top]=0;
                        healths[idx]--;
                        st.pop_back();
                    }else if(healths[top]>healths[idx]){
                        healths[top]--;
                        healths[idx]=0;
                        break;
                    }else{
                        healths[top]=0;
                        healths[idx]=0;
                        st.pop_back();
                        break;
                    }
                }
            }
        }
        vector<int>res;
        for(auto&hp:healths){
            if(hp==0)continue;
            res.push_back(hp);
        }
        return res;
    }
};
