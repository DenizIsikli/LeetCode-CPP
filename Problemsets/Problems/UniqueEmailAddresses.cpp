#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(string&email:emails){
            string clnEmail;
            for(char c:email){
                if(c=='+'||c=='@')break;
                if(c=='.')continue;
                clnEmail+=c;
            }
            clnEmail+=email.substr(email.find('@'));
            st.insert(clnEmail);
        }
        return st.size();
    }
};
