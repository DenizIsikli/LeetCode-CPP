#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int digitFrequencyScore(int n) {
        int arr[10]={0};
        int cpy=n;
        while(cpy!=0){
            arr[cpy%10]++;
            cpy/=10;
        }
        int ans=0;
        for(int i=0;i<10;i++){
            ans+=i*arr[i];
        }
        return ans;
    }
};
