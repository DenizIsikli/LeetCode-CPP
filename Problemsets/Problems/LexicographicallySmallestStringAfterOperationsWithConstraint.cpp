#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
    string getSmallestString(string s, int k) {
        for(int i=0,n=s.size();i<n&&k>0;++i){
            char ch=s[i];
            int dist=min(26-ch+'a',ch-'a');
            s[i]=dist>k?ch-k:'a';
            k-=dist;
        }
        return s;
    }
};
