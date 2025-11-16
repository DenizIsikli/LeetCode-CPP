#include <string>

using namespace std;

class Solution {
public:
    int maxDistance(string s, int k) {
        int ans=0;
        int n=0,sa=0,e=0,w=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='N') n++;
            else if(s[i]=='S') sa++;
            else if(s[i]=='E') e++;
            else if(s[i]=='W') w++;
            int x=abs(e-w);
            int y=abs(n-sa);
            int md=x+y;
            int dis=md+min(2*k,i+1-md);
            ans=max(ans,dis);
        }
        return ans;
    }
};
