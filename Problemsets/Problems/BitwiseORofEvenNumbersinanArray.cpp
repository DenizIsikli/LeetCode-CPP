#include <vector>

using namespace std;

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res=0;
        for(int&num:nums)if(num%2==0)res|=num;
        return res;
    }
};
