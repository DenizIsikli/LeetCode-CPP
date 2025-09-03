class Solution {
public:
    int minOperations(int n) {
        int opt=0;
        for(int i=0;i<n/2;i++){
            opt+=n-1-2*i;
        }
        return opt;
    }
};
