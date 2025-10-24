class Solution {
public:
    int distributeCandies(int n, int limit) {
        int cnt1=0,ans=0;
        while(cnt1<=limit){
            int cnt2=0;
            while(cnt2<=limit){
                int cnt3=n-cnt1-cnt2;
                if(0<=cnt3&&cnt3<=limit){
                    ans++;
                }
                cnt2++;
            }
            cnt1++;
        }
        return ans;
    }
};
