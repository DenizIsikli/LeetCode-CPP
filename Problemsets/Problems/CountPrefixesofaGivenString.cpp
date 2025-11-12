#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(const string& word:words){
            if(s.substr(0,word.size())==word) cnt++;
        }
        return cnt;
    }
};
