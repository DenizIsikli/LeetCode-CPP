#include <vector>

using namespace std;

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sm=0;
        for(int i=0;i<nums.size();i++){
            int tmp=nums[i],m=0;
            while(tmp>0){
                int d=tmp%10;
                if(d>m)m=d;
                tmp/=10;
            }
            int res=0,p=1;
            while(nums[i]>0){
                res+=m*p;
                p*=10;
                nums[i]/=10;
            }
            sm+=res;
        }
        return sm;
    }
};
