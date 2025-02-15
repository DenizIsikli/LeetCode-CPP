class Solution {
public:
    bool pos(int sq, int target) {
        if (target<0 || sq<target) return false;
        if (target==sq) return true;
        return (pos(sq/10, target-sq%10) || pos(sq/100, target-sq%100) || pos(sq/1000, target-sq%1000));
    }

    int punishmentNumber(int n) {
        int res = 0;
        for (int i = 1; i <= n; i++) {
            int sq=i*i;
            if (pos(sq, i)) {
                res+=sq;
            }
        }
        return res;
    }
};
