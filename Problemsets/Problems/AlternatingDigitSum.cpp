#include <bits/stdc++.h>
using namespace std;
class solution {
public:
    int alternatedigitsum(int n) {
        int sum=0,f=1;
        while(n){
            sum+=f*(n%10);
            f*=-1;
            n/=10;
        }
        return -f*sum;
    }
};
