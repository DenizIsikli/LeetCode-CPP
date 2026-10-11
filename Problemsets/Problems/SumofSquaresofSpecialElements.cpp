#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sm=0;
        for(int i=1;i<=nums.size();i++){
            if(n%i==0)sm+=nums[i-1]*nums[i-1];
        }
        return sm;
    }
};
