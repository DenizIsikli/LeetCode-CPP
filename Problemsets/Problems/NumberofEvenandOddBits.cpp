#include <vector>

using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>res(2,0);
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                if(i%2==0) res[0]++;
                else res[1]++;
            }
        }
        return res;
    }
};
