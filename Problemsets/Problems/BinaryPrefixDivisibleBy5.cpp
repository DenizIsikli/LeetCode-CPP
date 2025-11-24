#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>res;
        int pre=0;
        for(int&num:nums){
            pre=((pre<<1)+num)%5;
            res.push_back(pre==0);
        }
        return res;
    }
};
