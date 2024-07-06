class Solution {
public:
    int passThePillow(int n, int time) {
        int curr = 0;
        int dir = 1;
        for (int i = 0; i < time; i++) {
            curr += dir;
            if (curr == n) {
                curr = n-2;
                dir = -1;
            }
            if (curr == -1) {
                curr = 1;
                dir = 1;
            }
        }
        return curr+1;
    }
};
