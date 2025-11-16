#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int backtrack(unordered_map<char,int>&fq){
        int cnt=0;
        for(auto &entry:fq){
            if(entry.second>0){
                entry.second--;
                cnt+=1+backtrack(fq);
                entry.second++;
            }
        }
        return cnt;
    }

    int numTilePossibilities(string tiles) {
        int cnt=0;
        unordered_map<char,int>fq;
        for(char c:tiles)fq[c]++;
        return backtrack(fq);
    }
};
