#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            int index = nums2[i][0];
            int value = nums2[i][1];
            bool found = false;
            for (int j = 0; j < nums1.size(); j++) {
                if (nums1[j][0]==index) {
                    nums1[j][1] += value;
                    found = true;
                    break;
                }
            }
            if (!found) {
                nums1.push_back(nums2[i]);
            }
        }

        sort(nums1.begin(), nums1.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        return nums1;
    }
};
