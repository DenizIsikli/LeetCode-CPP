#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int x1=0,x2=0;
        for(;x1<n&&x2<m;){
            if(nums1[x1]==nums2[x2])return nums1[x1];
            else if(nums1[x1]>nums2[x2])x2++;
            else x1++;
        }
        return -1;
    }
};
