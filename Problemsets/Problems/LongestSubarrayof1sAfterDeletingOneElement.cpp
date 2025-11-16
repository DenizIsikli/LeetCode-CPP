#include <vector>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0;
        int zeroCnt=0;
        int maxLen=0;
        for(r=0;r<nums.size();r++){
            if(nums[r]==0) zeroCnt++;
            while(zeroCnt>1){
                if(nums[l]==0) zeroCnt--;
                l++;
            }
            maxLen=max(maxLen,r-l);
        }
        return maxLen;
    }
};
