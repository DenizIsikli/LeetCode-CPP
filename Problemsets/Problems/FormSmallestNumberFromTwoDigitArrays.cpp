#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mneq=INT_MAX;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    mneq=min(mneq,nums1[i]);
                }
            }
        }
        return min(mneq,min(nums1[0]*10+nums2[0],nums2[0]*10+nums1[0]));
    }
};
