class Solution {
public:
    int totalMoney(int n) {
        int ans=0,cnt=0;
        while(n/7){
            ans+=28+7*cnt;
            n-=7;
            cnt++;
        }
        for(int i=1;i<=n;i++)ans+=i+cnt;
        return ans;
    }
};
