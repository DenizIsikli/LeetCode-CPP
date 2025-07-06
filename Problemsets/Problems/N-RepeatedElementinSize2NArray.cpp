#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                return nums[i];
            } else {
                st.insert(nums[i]);
            }
        }
        return -1;
    }
};
