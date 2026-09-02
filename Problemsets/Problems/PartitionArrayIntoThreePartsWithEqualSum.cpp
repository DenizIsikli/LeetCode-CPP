#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int smt=accumulate(arr.begin(),arr.end(),0)/3;
        int tmp=0,l=0,r=0,cnt=0;
        for(int i=0;i<n;i++){
            tmp+=arr[i];
            if(tmp==smt){
                l=i;
                cnt++;
                break;
            }
        }
        tmp=0;
        for(int i=n-1;i>l;i--){
            tmp+=arr[i];
            if(tmp==smt){
                r=i;
                cnt++;
                break;
            }
        }
        if(r-l<=1){
            return false;
        }
        tmp=0;
        for(int i=l+1;i<r;i++){
            tmp+=arr[i];
        }
        if(tmp==smt&&cnt==2){
            return true;
        }
        return false;
    }
};
