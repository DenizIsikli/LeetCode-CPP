#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> fq;
        for (int &x : nums1) fq[x]++;
        int cnt1=0, cnt2=0;
        for (int &x : nums2) {
            if (fq.count(x)) {
                cnt1+=fq[x];
                cnt2++;
                fq[x]=0;
            }
        }
        return {cnt1, cnt2};
    }
};
