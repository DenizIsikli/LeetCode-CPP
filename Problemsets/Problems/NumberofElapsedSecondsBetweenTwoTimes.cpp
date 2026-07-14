#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hourDiff=(stoi(endTime.substr(0,2))-stoi(startTime.substr(0,2)))*3600;
        int minuteDiff=(stoi(endTime.substr(3,2))-stoi(startTime.substr(3,2)))*60;
        int secondDiff=(stoi(endTime.substr(6,2))-stoi(startTime.substr(6,2)));
        return hourDiff+minuteDiff+secondDiff;
    }
};
