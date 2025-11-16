#include <vector>

using namespace std;

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=1e9;
        for(auto&t:tasks){
            ans=min(ans,t[0]+t[1]);
        }
        return ans;
    }
};
