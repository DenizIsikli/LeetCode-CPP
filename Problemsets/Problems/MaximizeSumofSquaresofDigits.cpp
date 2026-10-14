#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>num*9)return "";
        int nines=sum/9,rem=sum%9;
        return (string(nines,'9')+char(rem+'0')+string(num,'0')).substr(0,num);
    }
};
