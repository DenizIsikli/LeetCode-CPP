#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        int cnt=0;
        deque<int>s;
        vector<int>ans;
        for(auto&x:nums){
            if(x==-1){
                ans.push_back(cnt<(int)s.size()?s[cnt]:-1);
                cnt++;
                continue;
            }
            s.push_front(x);
            cnt=0;
        }
        return ans;
    }
};
