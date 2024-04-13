class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        if(nums.size() == 1) return 0;

        int cnt = 0;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            while(nums[i] == nums[i+1]) {
                ++i;
            }
            cnt += (nums.size())-i-1;
        }
        return cnt;
    }
};
