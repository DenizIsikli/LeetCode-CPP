#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sm=0,cnt=0;
        for(int x:nums){
            if(x%3==0&&x%2==0){
                sm+=x;
                cnt++;
            }
        }
        return (cnt==0)?0:sm/cnt;
    }
};
