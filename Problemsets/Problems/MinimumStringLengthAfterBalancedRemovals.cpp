#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int>mp;
        int a,b;
        for(auto&c:s){
            if(c=='a')a++;
            else b++;
        }
        return abs(a-b);
    }
};
