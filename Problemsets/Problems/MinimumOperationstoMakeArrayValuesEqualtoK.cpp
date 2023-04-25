#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;
        set<int> st; 
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());
        for (auto &x : nums) st.insert(x);
        if (st.size()==1) {
            if (max_val<k) return -1;
            else if (max_val==k) return 0;
            else return 1;
        } else {
            if (max_val==k || min_val<k) return -1;
            res = st.size()-1;
        }
        return (min_val>k ? res+1 : res);
    }
};
