const int INT_MAX = 2147483647;

using namespace std;

class Solution {
public:
    int smallestNumber(int n, int t) {
        int res = 0;
        for (int i = n; i < INT_MAX; i++) {
            int x=1,y=i;
            while (y) {
                x*=y%10;
                y/=10;
                if (x%t==0) { res=i; break; }
            }
            if (res>0) break;
        }
        return res;
    }
};
