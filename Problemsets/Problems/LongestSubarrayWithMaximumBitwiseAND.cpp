#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int maxAnd=*max_element(nums.begin(),nums.end());
        int maxLength=0,currentLength=0;
        for(int num:nums){
            if(num==maxAnd)currentLength++;
            else{
                maxLength=max(maxLength,currentLength);
                currentLength=0;
            }
        }
        return max(maxLength,currentLength);
    }
};
