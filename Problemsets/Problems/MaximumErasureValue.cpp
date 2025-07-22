#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int mx=0,sm=0;
        int l=0,r=0;
        set<int>s;
        while(r<nums.size()){
            while(s.find(nums[r])!=s.end()){
                s.erase(nums[l]);
                sm-=nums[l];
                l++;
            }
            s.insert(nums[r]);
            sm+=nums[r];
            mx=max(mx,sm);
            r++;
        }
        return mx;
    }
};
