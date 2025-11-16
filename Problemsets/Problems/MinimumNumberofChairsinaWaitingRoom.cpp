#include <string>

using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int mx=0;
        int cnt=0;
        for(auto&c:s){
            if(c=='E'){
                cnt++;
                mx=max(mx,cnt);
            }else{cnt--;}
        }
        return mx;
    }
};
