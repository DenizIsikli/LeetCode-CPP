#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int dim[13]={0,31,28,31,30,31,30,31,31,30,31,30};
        partial_sum(begin(dim),end(dim),begin(dim));
        auto day=[&](string s){return dim[stoi(s.substr(0,2))-1]+stoi(s.substr(3));};
        int aA=day(arriveAlice),lA=day(leaveAlice),aB=day(arriveBob),lB=day(leaveBob);
        int latestArrive=aA;
        if(aB>aA)latestArrive=aB;
        int earliestLeave=lA;
        if(lB<lA)earliestLeave=lB;
        if(latestArrive>earliestLeave)return 0;
        return earliestLeave-latestArrive+1;
    }
};
