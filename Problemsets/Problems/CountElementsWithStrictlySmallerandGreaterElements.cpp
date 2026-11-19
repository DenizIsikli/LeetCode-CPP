#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        nums.erase(remove(nums.begin(),nums.end(),mn),nums.end());
        nums.erase(remove(nums.begin(),nums.end(),mx),nums.end());
        return nums.size();
    }
};
