#include <vector>

using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>tmp;
        int n=nums.size();
        while(n>1){
            tmp.clear();
            for(int i=0;i<n-1;i++){
                tmp.push_back((nums[i]+nums[i+1])%10);
            }
            nums=tmp;
            n--;
        }
        return nums[0];
    }
};
