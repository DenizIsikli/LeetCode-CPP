#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1,s2,s3;
        s1.insert(nums1.begin(),nums1.end());
        s2.insert(nums2.begin(),nums2.end());
        s3.insert(nums3.begin(),nums3.end());
        unordered_map<int,int> fq;
        for (auto x : s1) fq[x]++;
        for (auto x : s2) fq[x]++;
        for (auto x : s3) fq[x]++;
        vector<int> res;
        for (auto &[k,v] : fq) { if (v >= 2) res.push_back(k); }
        return res;
    }
};
