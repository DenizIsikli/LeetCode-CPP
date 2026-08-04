#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int convertTime(string current, string correct) {
        int curMin=(stoi(current.substr(0,2))*60)+stoi(current.substr(3,2));
        int corMin=(stoi(correct.substr(0,2))*60)+stoi(correct.substr(3,2));
        int diff=corMin-curMin;
        int ans=0;
        while(diff>0){
            if(diff>=60){diff-=60;ans++;}
            else if(diff>=15){diff-=15;ans++;}
            else if(diff>=5){diff-=5;ans++;}
            else if(diff>=1){diff-=1;ans++;}
        }
        return ans;
    }
};
