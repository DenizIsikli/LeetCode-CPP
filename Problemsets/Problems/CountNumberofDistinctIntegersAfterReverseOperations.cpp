#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int ans=0;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int newX=0;
            while(x>0){
                int digit=x%10;
                newX=newX*10+digit;
                x=x/10;
            }
            st.insert(newX);
        }
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        return st.size();
    }
};
