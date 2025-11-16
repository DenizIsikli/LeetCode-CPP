#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto&num:nums)mp[num]++;
        for(auto&it:mp){
            int key=it.first;
            int freq=it.second;
            if(freq%k==0)ans+=key*freq;
        }
        return ans;
    }
};
