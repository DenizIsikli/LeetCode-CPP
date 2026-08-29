#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0&&n==1)return 1;
        vector<int>cnt(n+1);
        for(auto it:trust){
            cnt[it[0]]--;
            cnt[it[1]]++;
        }
        for(int p=0;p<cnt.size();p++){
            if(cnt[p]==n-1)return p;
        }
        return -1;
    }
};
