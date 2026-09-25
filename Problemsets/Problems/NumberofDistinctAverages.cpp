#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<double>s;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            double avg=(nums[i]+nums[n-i-1])/2.0;
            s.insert(avg);
        }
        return s.size();
    }
};
