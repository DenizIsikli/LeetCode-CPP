#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });
        int ans=0;
        for(auto&bx:boxTypes){
            int canTake=min(bx[0],truckSize);
            ans+=canTake*bx[1];
            truckSize-=canTake;
            if(truckSize==0)break;
        }
        return ans;
    }
};
