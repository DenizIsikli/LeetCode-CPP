#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(c=="+"){
                int x1=st.top();st.pop();
                int x2=st.top();st.pop();
                st.push(x2+x1);
            }else if(c=="-"){
                int x1=st.top();st.pop();
                int x2=st.top();st.pop();
                st.push(x2-x1);
            }else if(c=="*"){
                int x1=st.top();st.pop();
                int x2=st.top();st.pop();
                st.push(x2*x1);
            }else if(c=="/"){
                int x1=st.top();st.pop();
                int x2=st.top();st.pop();
                st.push(x2/x1);
            }else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
