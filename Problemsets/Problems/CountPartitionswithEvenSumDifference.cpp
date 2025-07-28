#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int x=0;
        vector<int>p(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)p[i+1]=p[i]+nums[i];
        int tot=p[p.size()-1];
        int ans=0;
        for(int i=1;i<p.size()-1;i++){
            x=p[i];
            if(abs(x-(tot-x))%2==0)ans++;
        }
        return ans;
    }
};
