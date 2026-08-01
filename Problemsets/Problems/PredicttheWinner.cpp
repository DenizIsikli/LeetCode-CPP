#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<int>pl(n);
        for(int l=n-1;l>=0;l--){
            int L=nums[l];
            pl[l]=L;
            for(int r=l+1;r<n;r++){
                pl[r]=max(L-pl[r],nums[r]-pl[r-1]);
            }
        }
        return pl[n-1]>=0;
    }
};
