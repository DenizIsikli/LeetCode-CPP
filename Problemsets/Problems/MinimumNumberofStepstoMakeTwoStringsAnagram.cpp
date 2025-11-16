#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        int cntS=0,cntT=0;
        int sa[26],ta[26];
        for(auto&c:s)sa[c-'a']++;
        for(auto&c:t)ta[c-'a']++;
        for(int i=0;i<26;i++){
            if(sa[i]>ta[i])cntS+=abs(sa[i]-ta[i]);
            else{cntT+=abs(ta[i]-sa[i]);}
        }
        return min(cntS,cntT);
    }
};
