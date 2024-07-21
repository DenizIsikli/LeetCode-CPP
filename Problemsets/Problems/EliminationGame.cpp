class Solution {
public:
    int lastRemaining(int n) {
        int start = 1, step = 1, remaining = n;
        bool left = true;
        while (remaining > 1) {
            if (left || remaining % 2 == 1) {
                start += step;
            }
            remaining /= 2;
            step *= 2;
            left = !left;
        }
        return start;
    }
};
