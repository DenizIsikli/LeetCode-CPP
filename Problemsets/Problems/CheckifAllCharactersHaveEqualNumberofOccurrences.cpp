#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int,int>fq;
        for(auto c:s){
            fq[c]++;
        }
        bool flag=true;
        int firstFreq=fq[s[0]];
        for(const auto&p:fq){
            if(p.second!=firstFreq){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
