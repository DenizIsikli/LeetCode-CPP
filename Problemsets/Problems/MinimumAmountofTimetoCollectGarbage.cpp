#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTime = 0;
        int lastMetal = 0, lastPlastic = 0, lastPaper = 0;
        int n = garbage.size();
        for (int i = 0; i < n; ++i) {
            totalTime += garbage[i].size();
            if (garbage[i].find('M') != string::npos) lastMetal = i;
            if (garbage[i].find('P') != string::npos) lastPlastic = i;
            if (garbage[i].find('G') != string::npos) lastPaper = i;
        }

        vector<int> prefixTravel(n, 0);
        for (int i = 1; i < n; i++) {
            prefixTravel[i] = prefixTravel[i - 1] + travel[i - 1];
        }

        if (lastMetal > 0) totalTime += prefixTravel[lastMetal];
        if (lastPlastic > 0) totalTime += prefixTravel[lastPlastic];
        if (lastPaper > 0) totalTime += prefixTravel[lastPaper];

        return totalTime;
    }
};
