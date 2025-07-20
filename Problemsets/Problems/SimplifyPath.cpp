#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        for(size_t i=0;i<path.size();i++){
            if (path[i]=='/')continue;
            string temp;
            while(i<path.size()&&path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp==".")continue;
            if(temp==".."){if(!st.empty()){st.pop();}}
            else{st.push(temp);}
        }
        string ans;
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans.empty())return "/";
        if(ans.size()>1 && ans.back()=='/') ans.pop_back();
        return ans;
    }
};
