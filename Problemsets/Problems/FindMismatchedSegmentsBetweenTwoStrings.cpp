#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>res;
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                vector<string>tmp;
                string tmp1,tmp2;
                int idx=i;
                while(idx<n&&s1[idx]!=s2[idx]){
                    tmp1+=s1[idx];
                    tmp2+=s2[idx];
                    idx++;
                }
                tmp.push_back(tmp1);
                tmp.push_back(tmp2);
                res.push_back(tmp);
                i=idx-1;
            }
        }
        return res;
    }
};
