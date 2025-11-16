#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int ans=0;
        int prevend=0;
        for(auto meeting:meetings){
            int start=meeting[0];
            int end=meeting[1];
            if(start>prevend){
                ans+=start-prevend-1;
            }
            prevend=max(prevend,end);
        }
        if(prevend<days)ans+=days-prevend;
        return ans;
    }
};
