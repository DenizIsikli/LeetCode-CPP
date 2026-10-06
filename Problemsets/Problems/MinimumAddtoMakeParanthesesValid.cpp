#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(std::string s) {
        stack<char>st;
        int cnt=0;
        for(auto c:s){
            if(c=='(')st.push(c);
            else{
                if(st.empty())cnt++;
                else st.pop();
            }
        }
        return cnt+st.size();
    }
};
