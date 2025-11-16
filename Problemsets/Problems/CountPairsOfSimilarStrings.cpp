#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<int,int>mp;
        int cnt=0;
        for(const string&word:words){
            int mask = 0;
            for(char c : word) {
                mask |= (1 << (c - 'a'));
            }
            mp[mask]++;
        }
        for(const auto&[mask,count]:mp){
            if(count>1) {
                cnt+=(count*(count-1))/2;
            }
        }
        return cnt;
    }
};
