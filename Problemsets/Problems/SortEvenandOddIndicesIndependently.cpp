#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even,odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        vector<int>ans;
        for(int ev=0,od=0;ev<even.size()||od<odd.size();){
            if(ev<even.size())ans.push_back(even[ev++]);
            if(od<odd.size())ans.push_back(odd[od++]);
        }
        return ans;
    }
};
