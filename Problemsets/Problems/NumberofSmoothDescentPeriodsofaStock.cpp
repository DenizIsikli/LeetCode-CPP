#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long total_periods=1;
        long long current_period_length = 1;
        for(int i=1;i<prices.size();i++){
            if(i>0&&prices[i]==prices[i-1]-1)current_period_length++;
            else current_period_length=1;
            total_periods+=current_period_length;
        }
        return total_periods;
    }
};
