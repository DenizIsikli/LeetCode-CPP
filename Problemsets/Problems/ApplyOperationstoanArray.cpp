#include <vector>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)res.push_back(nums[i]);
        }
        int rem=nums.size()-res.size();
        for(int i=0;i<rem;i++)res.push_back(0);
        return res;
    }
};
