#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        string os;
        int l=0,r=s.size()-1;
        auto isPalindrome=[&](string s,int l,int r){
            while(l<r){
                if(s[l]!=s[r])return false;
                l++;
                r--;
            }
            return true;
        };
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return isPalindrome(s,l,r-1)||isPalindrome(s,l+1,r);
            }
        }
        return true;
    }
};
