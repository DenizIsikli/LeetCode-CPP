#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        int cnt=0;
        deque<int>dq,ans;
        for(auto&x:nums){
            if(x==-1){
                ans.push_back(cnt<dq.size()?dq[cnt]:-1);
                cnt++;
                continue;
            }
            cnt=0;
            dq.push_front(x);
        }
        return vector<int>(ans.begin(),ans.end());
    }
};
