#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long m=min(need1,need2);
        long long pairCost=min((long long)cost1+cost2,(long long)costBoth);
        long long one=min((long long)cost1,(long long)costBoth);
        long long two=min((long long)cost2,(long long)costBoth);
        return pairCost*m+one*(need1-m)+two*(need2-m);
    }
};

// TLE solution
// class SolutionTLE {
// public:
//     long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
//         long long ans=0;
//         while(need1>0||need2>0){
//             if(need1>0&&need2>0){
//                 ans+=min((long long)cost1+cost2,(long long)costBoth);
//                 need1--;need2--;
//             }else if(need1>0){
//                 ans+=min(cost1,costBoth);
//                 need1--;
//             }else{
//                 ans+=min(cost2,costBoth);
//                 need2--;
//             }
//         }
//         return ans;
//     }
// };
