class Solution {
public:
    int minChanges(int n, int k) {
        int cnt = 0;
        
        for(int i=0; i<30; i++) {
            if(k & (1<<i)) {
                if(!(n&(1<<i))) {
                    return -1;
                }
            }
            else {
                if(n&(1<<i)) cnt++;
            }
        }
        
        return cnt;
    }
};
