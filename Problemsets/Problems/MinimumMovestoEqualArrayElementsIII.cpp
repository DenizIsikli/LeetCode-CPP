#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=mx){
                ans+=mx-nums[i];
            }
        }
        return ans;
    }
};
