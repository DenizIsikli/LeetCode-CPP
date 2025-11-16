#include <vector>

using namespace std;

class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sm=0;
        int ans=0;
        for(int&num:nums){
            sm+=num;
            if(num!=0&&sm==0){ans++;}
        }
        return ans;
    }
};
