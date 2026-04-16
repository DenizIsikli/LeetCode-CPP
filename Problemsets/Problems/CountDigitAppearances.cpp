#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(auto&x:nums){
            while(x){
                if(x%10==digit)ans++;
                x/=10;
            }
        }
        return ans;
    }
};
