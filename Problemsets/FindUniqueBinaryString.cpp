class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        std::string ans = "";

        // if the binary of nums[i] is 0, then ans[i] = 1, and vice versa
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i][i] == '1') {
                ans += '0';
            } else {
                ans += '1';
            }
        }
        return ans;
    }
};
