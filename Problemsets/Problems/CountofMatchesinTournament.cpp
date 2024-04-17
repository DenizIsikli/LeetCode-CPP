class Solution {
public:
    int numberOfMatches(int n) {
        std::vector<int> ans;
        while (n>1) {
            if (n%2==1) {
                int matches = (n-1)/2;
                int advance = (n-1)/2+1;
                ans.push_back(matches);
                n -= matches;
            } else {
                int matches = n/2;
                int advance = n/2;
                ans.push_back(matches);
                n -= matches;
            }
        }
        int sum = std::accumulate(ans.begin(), ans.end(), 0);
        return sum;
    }
};
