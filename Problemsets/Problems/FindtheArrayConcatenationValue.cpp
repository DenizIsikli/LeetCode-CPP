#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        while(nums.size()){
            if(nums.size()==1){
                ans+=nums[0];
                nums.pop_back();
            }else{
                string s=to_string(nums[0])+to_string(nums[nums.size()-1]);
                ans+=stoi(s);
                nums.erase(nums.begin());
                nums.pop_back();
            }
        }
        return ans;
    }
};
