#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        auto isValid=[&](vector<int>v)->bool{
            if(v.size()==1)return true;
            sort(v.begin(),v.end());
            int initAbsVal=abs(v[1]-v[0]);
            for(int i=2;i<v.size();i++){
                if(abs(v[i]-v[i-1])!=initAbsVal){return false;}
            }
            return true;
        };
        for(int i=0;i<l.size();i++){
            vector<int>v;
            int lIdx=l[i],rIdx=r[i];
            for(int j=lIdx;j<=rIdx;j++){
                v.push_back(nums[j]);
            }
            if(isValid(v))res.push_back(true);
            else res.push_back(false);
            v.clear();
        }
        return res;
    }
};
