#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string processStr(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(islower(s[i]))ans+=s[i];
            else if(s[i]=='*'&&!ans.empty())ans.pop_back();
            else if(s[i]=='#'&&!ans.empty())ans+=ans;
            else if(s[i]=='%'&&!ans.empty())reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};
