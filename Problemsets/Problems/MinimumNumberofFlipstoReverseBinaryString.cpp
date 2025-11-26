#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumFlips(int n) {
        string bin="";
        int tmp=n;
        while(tmp>0){
            bin+=(tmp%2)?'1':'0';
            tmp/=2;
        }
        string bin2=bin;
        reverse(bin2.begin(),bin2.end());
        int num1=stoi(bin, nullptr, 2);
        int num2=stoi(bin2, nullptr, 2);
        return __builtin_popcount(num1^num2);
    }
};
