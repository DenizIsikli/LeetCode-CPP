#include <vector>

using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        auto digSum=[](int x) {
            int sum=0;
            while (x>0) {
                sum+=x % 10;
                x/=10;
            }
            return sum;
        };

        vector<int>sum(37);
        for(int i=1;i<=n;i++)sum[digSum(i)]++;

        int mxi=0,cnt=0;
        for(int i:sum){
            if(i>mxi)mxi=i,cnt=1;
            else if(i==mxi)++cnt;
        }
        return cnt;
    }
};
