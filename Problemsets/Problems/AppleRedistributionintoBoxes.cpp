#include <bits/stdc++.h>
#include <numeric>

using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sm=accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.rbegin(), capacity.rend());
        int res=0;
        while(sm>0){
            sm-=capacity[res++];
        }
        return res;
    }
};
