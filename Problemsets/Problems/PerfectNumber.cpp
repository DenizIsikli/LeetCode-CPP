class Solution {
public:
    bool checkPerfectNumber(int num) {
        int tmp=num;
        int ans=0;
        tmp--;
        while(tmp>0){
            if(num%tmp==0){
                ans+=tmp;
            }
            tmp--;
        }
        return ans==num;
    }
};
