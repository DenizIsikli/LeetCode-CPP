#include <string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1=s.substr(0,s.size()/2);
        string s2=s.substr(s.size()/2);
        int cnt1=0,cnt2=0;
        for(char c:s1){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                cnt1++;
            }
        }
        for(char c:s2){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                cnt2++;
            }
        }
        return cnt1==cnt2;
    }
};
