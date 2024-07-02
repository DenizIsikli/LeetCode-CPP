#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> ans;
    
        if (nums1.size() > nums2.size()) {
            for (int i = 0; i < nums2.size(); ++i) {
                if (std::find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()) {
                    ans.push_back(nums2[i]);
                    nums1.erase(std::find(nums1.begin(), nums1.end(), nums2[i]));
                }
            }
        } else {
            for (int i = 0; i < nums1.size(); ++i) {
                if (std::find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()) {
                    ans.push_back(nums1[i]);
                    nums2.erase(std::find(nums2.begin(), nums2.end(), nums1[i]));
                }
            }
        }
        return ans;
    }
};
