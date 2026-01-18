#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double sm=0,cnt=0;
        for(int i=arr.size()/20;i<arr.size()-(arr.size()/20);i++){
            sm+=arr[i];
            cnt++;
        }
        return sm/cnt;
    }
};
