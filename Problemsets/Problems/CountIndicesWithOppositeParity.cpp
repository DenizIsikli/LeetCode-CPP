#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]&1)!=(nums[j]&1))cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
