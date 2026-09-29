#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>fq(101,0);
        int mxfq=0;
        for(int x:nums){
            fq[x]++;
            mxfq=max(mxfq,fq[x]);
        }
        vector<int>ans;
        for(int i=0;i<mxfq;i++){
            for(int j=0;j<101;j++){
                if(fq[j]>0){
                    ans.push_back(j);
                    fq[j]--;
                }
            }
        }
        return ans;
    }
};
