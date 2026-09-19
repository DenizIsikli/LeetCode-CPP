#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i=left;i<=right;i++){
            bool f=false;
            for(auto&r:ranges){
                if(i>=r[0]&&i<=r[1])f=true;
            }
            if(!f)return false;
        }
        return true;
    }
};
