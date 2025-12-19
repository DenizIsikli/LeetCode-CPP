class Solution {
public:
    int countEven(int num) {
        auto digitSum=[](int n)->int{
            int sum=0;
            while(n){
                sum+=n%10;
                n/=10;
            }

            return sum;
        };
        int cnt=0;
        for(int i=1;i<=num;++i){
            if(digitSum(i)%2==0){
                ++cnt;
            }
        }
        return cnt;
    }
};
