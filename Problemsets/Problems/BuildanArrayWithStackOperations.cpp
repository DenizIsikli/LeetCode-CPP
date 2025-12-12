#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int idx=0;
        vector<string>res;
        vector<int>tmp;
        for(int i=1;i<=n;i++){
            if(target[idx]!=i){
                res.push_back("Push");
                res.push_back("Pop");
            }else{
                res.push_back("Push");
                tmp.push_back(i);
                if(tmp==target)return res;
                idx++;
            }
        }
        return res;
    }
};
