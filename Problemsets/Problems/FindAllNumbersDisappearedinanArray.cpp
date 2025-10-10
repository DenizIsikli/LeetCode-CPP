#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        for(int&num:nums)mp[num]++;
        vector<int>res;
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end())res.push_back(i);
        }
        return res;
    }
};