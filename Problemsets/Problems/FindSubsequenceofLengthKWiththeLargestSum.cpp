#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>ans(k);
        vector<pair<int,int>> idxNums;
        for(int i=0;i<nums.size();i++){
            idxNums.push_back({nums[i],i});
        }
        sort(idxNums.begin(),idxNums.end(),greater<pair<int,int>>());
        sort(idxNums.begin(),idxNums.begin()+k,[](const pair<int,int>& a,const pair<int,int>& b){
            return a.second<b.second;
        });
        for(int i=0;i<k;i++){
            ans[i]=idxNums[i].first;
        }
        return ans;
    }
};
