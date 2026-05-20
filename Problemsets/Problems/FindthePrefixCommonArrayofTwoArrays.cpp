#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>cnt(55,0),ans(n,0);
        int cm=0;
        for(int i=0;i<n;i++){
            cnt[A[i]]++,cnt[B[i]]++;
            if(cnt[A[i]]==2)cm++;
            if(A[i]!=B[i]&&cnt[B[i]]==2)cm++;
            ans[i]=cm;
        }
        return ans;
    }
};
