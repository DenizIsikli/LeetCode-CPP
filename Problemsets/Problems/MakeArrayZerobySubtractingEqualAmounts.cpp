#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1&&nums[0]==0)return 0;
        unordered_map<int,int>mp;
        for(auto&x:nums)if(x!=0)mp[x]++;
        return (int)mp.size();
    }
};
