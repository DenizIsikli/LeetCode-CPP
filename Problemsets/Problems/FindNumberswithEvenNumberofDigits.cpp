#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (auto &x : nums) {
            string intToNum = to_string(x);
            if (intToNum.size()%2==0) cnt++;
        }
        return cnt;
    }
};
