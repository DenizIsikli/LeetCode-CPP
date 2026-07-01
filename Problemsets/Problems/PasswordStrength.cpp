#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        set<char>sLower,sUpper,sDigit,sSpecial;
        for(int i=0;i<password.size();i++){
            if(password[i]>='a'&&password[i]<='z')sLower.insert(password[i]);
            else if(password[i]>='A'&&password[i]<='Z')sUpper.insert(password[i]);
            else if(password[i]>='0'&&password[i]<='9')sDigit.insert(password[i]);
            else sSpecial.insert(password[i]);
        }
        ans+=sLower.size(),ans+=sUpper.size()*2,ans+=sDigit.size()*3,ans+=sSpecial.size()*5;
        return ans;
    }
};
