class Solution {
public:
    long long coloredCells(long long n) {
        if (n==1) return 1;
        return (n*n)+(n-1)*(n-1);
    }
};
