#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        auto f=[](int x){
            while(x){
                if(x%10==0)return false;
                x/=10;
            }
            return true;
        };
        for(int i=1;i<n;i++){
            int j=n-i;
            if(f(i)&&f(j))return{i,j};
        }
        return{};
    }
};
