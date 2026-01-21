#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==2){
                nums[i]=-1;
                continue;
            }
            for(int j=0;j<32;j++){
                if((nums[i]&(1<<j))>0)continue;
                int num=(nums[i]^(1<<(j-1)));
                nums[i]=num;
                break;
            }
        }
        return nums;
    }
};
