#include <set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>s;
        sort(nums.rbegin(), nums.rend());
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(s.size()<k && s.find(nums[i])==s.end()){
                s.insert(nums[i]);
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
