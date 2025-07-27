#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        set<int>res;
        for(int i=0;i<n;i++) {
            int l=nums[i][0],r=nums[i][1];
            for(int j=l;j<=r;j++)res.insert(j);
        }
        return res.size();
    }
};
