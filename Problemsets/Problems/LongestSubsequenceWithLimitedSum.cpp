#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>res(queries.size());
        sort(nums.begin(), nums.end());
        for(int i=0;i<queries.size();i++){
            int x=queries[i];
            int sum=0,cnt=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                if(sum<=x) cnt++;
                else break;
            }
            res[i]=cnt;
        }
        return res;
    }
};
