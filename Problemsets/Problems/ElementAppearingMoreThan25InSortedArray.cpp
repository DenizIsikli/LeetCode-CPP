#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int quarter=arr.size()/4;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>quarter){
                return arr[i];
            }
        }
        return -1;
    }
};
