#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=*max_element(nums.begin(), nums.end());
        int mn=*min_element(nums.begin(), nums.end());
        vector<int>ms;
        for(int i=mn;i<=mx;i++)if(find(nums.begin(),nums.end(),i)==nums.end())ms.push_back(i);
        return ms;
    }
};
