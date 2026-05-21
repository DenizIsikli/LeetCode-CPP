#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>arr1Set,arr2Set;
        for(auto&s1:arr1){
            string str1=to_string(s1);
            string s="";
            for(auto&c:str1){
                s+=c;
                arr1Set.insert(s);
            }
        }
        for(auto&s2:arr2){
            string str2=to_string(s2);
            string s="";
            for(auto&c:str2){
                s+=c;
                arr2Set.insert(s);
            }
        }
        int mx=0;
        for(auto&s:arr1Set){
            if(arr2Set.count(s)){
                mx=max(mx,(int)s.size());
            }
        }
        return mx;
    }
};
