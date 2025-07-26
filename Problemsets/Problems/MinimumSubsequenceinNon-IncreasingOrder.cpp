#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>res;
        int sum=0,tot=0;
        for(int i=0;i<nums.size();i++) {
            tot+=nums[i];
        }
        for(int i=0;i<nums.size();i++) {
            res.push_back(nums[i]);
            sum+=nums[i];
            if(sum>tot-sum) {
                break;
            }
        }
        return res;
    }
};
