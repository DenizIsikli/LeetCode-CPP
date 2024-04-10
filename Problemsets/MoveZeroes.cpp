class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }

        for(int i=temp.size();i<nums.size();i++)
        {
            temp.push_back(0);
        }
        nums=temp;
    }
};
