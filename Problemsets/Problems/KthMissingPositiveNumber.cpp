#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v(arr.size()+k);
        iota(v.begin(),v.end(),1);
        for(int x:v){
            if(find(arr.begin(),arr.end(),x)==arr.end()){
                k--;
                if(k==0)return x;
            }
        }
        return -1;
    }
};
