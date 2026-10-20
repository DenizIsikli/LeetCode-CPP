#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        vector<int>divs;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                divs.push_back(i);
                if(i!=n/i)divs.push_back(n/i);
            }
        }
        int ans=0;
        for(auto&k:divs){
            bool f=true;
            for(int i=0;i<n&&f;i+=k){
                int desc=0,pos=-1;
                for(int j=0;j<k;j++){
                    if(nums[i+j]>nums[i+(j+1)%k]){
                        desc++;
                        pos=j;
                        if(desc>1)break;
                    }
                }
                if(desc>1){
                    f=false;
                    break;
                }
                int r=(desc==0)?0:(pos+1)%k;
                for(int j=0;j<k;j++){
                    if(nums[i+(r+j)%k]!=sorted[i+j]){
                        f=false;
                        break;
                    }
                }

            }
            if(f)ans+=k;
        }
        return ans;
    }
};
