class Solution {
public:
    long long removeZeros(long long n) {
        long long res=0;
        long long mul=1;
        while(n>0){
            int d=n%10;
            n=n/10;
            if(d!=0){
                res+=d*mul;
                mul*=10;
            }
        }
        return res;
    }
};
