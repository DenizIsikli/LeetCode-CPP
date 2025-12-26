#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int bestTime=0;
        int pen=0;
        int pre=0;
        for(int i=0;i<customers.size();i++){
            pre+=(customers[i]=='Y'?1:-1);
            if(pre>pen){
                pen=pre;
                bestTime=i+1;
            }
        }
        return bestTime;
    }
};
