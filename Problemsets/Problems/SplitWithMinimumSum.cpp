#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        int n=s.size();
        int a=0, b=0;
        for(int i=0; i<n; i++) {
            if(i%2==0){
                a=a*10+(s[i]-'0');
            }else {
                b=b*10+(s[i]-'0');
            }
        }
        return a+b;
    }
};
