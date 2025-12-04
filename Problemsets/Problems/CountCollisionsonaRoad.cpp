#include <string>

using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size();
        if(n==1)return 0;
        int l=0,r=n-1;
        while(l<n&&directions[l]=='L')l++;
        while(l<r&&r>=0&&directions[r]=='R')r--;
        if(l>=r)return 0;
        int ans=0;
        for(;l<=r;l++){
            while(directions[l]=='R'){
                l++;
                ans++;
            }
            if(directions[l]=='L')ans++;
        }
        return ans;
    }
};
