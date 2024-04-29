#include <vector>
#include <algorithm>

class Solution {
public:
    bool isPoss(std::vector<int> nums1, std::vector<int> nums2, int x){
        for (int & i : nums1) i+=x;
        int j = 0;
        for (int k : nums1) {
            if(k == nums2[j]) j++;
            if(j==nums2.size()) return true;
        }
        return false;
    }

    int minimumAddedInteger(std::vector<int>& nums1, std::vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for (int i = -1000; i < 1000; ++i) {
            if (isPoss(nums1,nums2,i)) return i;
        }
        return 0;
    }
};
