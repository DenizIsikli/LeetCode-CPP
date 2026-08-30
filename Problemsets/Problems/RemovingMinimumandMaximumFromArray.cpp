#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mxIdx=max_element(nums.begin(),nums.end())-nums.begin();
        int mnIdx=min_element(nums.begin(),nums.end())-nums.begin();
        int i=min(mxIdx,mnIdx);
        int j=max(mxIdx,mnIdx);
        return min({j+1,n-i,n-j+i+1});
    }
};
